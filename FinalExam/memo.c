
//=====================================================================================================================================
// 9����: C Characters and Strings

// 1. ����(Character)
// ���ĺ� �ϳ����� ǥ���� �� character(����)��� ��
// character constant(���� ���): single quotes(���� ����ǥ)�� �̿��Ͽ� ��Ÿ��.
//								  ���� ���� ������ �ȴ�. (�ƽ�Ű�ڵ� ASCII)			ex) '\n'�� �ƽ�Ű�ڵ�� 10�� ������.

// 2. ���ڿ�(String)
// ����, ����, Ư����ȣ���� �������� ������� �� �ִ� ���� string(���ڿ�)�̶�� ��
// String literals = String constants: double quotation marks(ū ����ǥ)�� �̿��Ͽ� ��Ÿ��.
//									   ��ħǥ, ����, ��ǥ, ��ȣ�� ������ ���� chracter�鵵 string constants�� �νĵ�
//									   ���ڿ��� ������ �迭�̹Ƿ� �������� null character('\0')�� ���� ��(word[20]���� 19���ڸ� �Է¹��� �� ����)
//									   (ù ��° ���ڸ� ����Ű�� �����ͷμ� ���� ����, �迭�̸鼭 �������� ��)

// - ���� ���
/*
	1) char color[] = "blue";
	2) const char *colorPtr = "blue";
	3) char color[] = { 'b', 'l', 'u', 'e', '\0' };
	
*/

// 3. scanf
// scanf�� space, tab, newline�� ���� EOF(end-of-file) ���ڰ� ���� ������ �Է� �޴´�.

// 4. Chracter-Handling Library - <ctype.h>

/*
	1) int isblank(int c);
	2) int isdigit(int c); : 0-9���� �������� �Ǻ�
	3) int isalpha(int c); : ��ҹ��� ������� ���ĺ����� �˻�
	4) int isalnum(int c); : ��ҹ��� ������� ���ĺ����� �������� �˻�
	5) int isxdigit(int c); : 16���� �������� �Ǻ�(A-F, a-f, 0-9)
	6) int islower(int c); : �ҹ��� ���ĺ����� �Ǻ�
	7) int isupper(int c); : �빮�� ���ĺ����� �Ǻ�
	8) int tolower(int c); : �빮�ڸ� �ҹ��ڷ� ��ȯ(��ȯ�� �� �� ���� ��쿡�� �״��)
	9) int toupper(int c); : �ҹ��ڸ� �빮�ڷ� ��ȯ(��ȯ�� �� �� ���� ��쿡�� �״��)
	10) int isspace(int c); : whitespace characters��
							space(' '), form feed('\f'), newline('\n'), carriage return('\r'), horizontal tab('\t'), vertical tab('\v')
							�� ���� �Է��� ������ �� true ����
	11) int iscntrl(int c); : control characters��
							alert('\a'), form feed('\f'), newline('\n'), backspace('\b'), carriage return('\r'),
							horizontal tab('\t'), vertical tab('\v')
							�� ���� �Է��� ������ �� true ����
	12) int ispunct(int c); : space�� digit �Ǵ� letter�� �ƴ� ��� ������ ��ȣ�� ��쿡 true�� ����($, #, (, ), [, ], {, }, ;, :, %)
	13) int isprint(int c); : space���� �����ؼ� ȭ�鿡 ��� ������ ������ ��쿡 ture�� ����
	14) int isgraph(int c); : isprint�� ������ space character�� ���Ե��� ����

*/

// cf) conditional operator(?:)

// 5. String-Conversion Functions - <stdlib.h> 
// : ���⿡ �ִ� �Լ����� �⺻������ ���ڿ� �ȿ� ���ڷ� �Ǿ��ִ� ���ڵ��� ���� ������ ��ȯ���� ��(������ �����ϵ���)

/*

	1) double strtod(const char *nPtr, char **endPtr); : string�� double(d)�� �ٲ۴�. ��ȯ ���ϸ� 0 return. char*�� �����Ͷ�� �ǹ̷� ** �� ��
	2) long strtol(const char *nPtr, char **endPtr, int base); : string�� long(l)���� �ٲ۴�.
																������ �κ��� �ʿ� ���ٸ� �� ��° �μ��� NULL�� ���� ��
	3) unsigned long strtoul(const char *nPtr, char **endPtr, int base); : string�� unsigned long(ul)���� �ٲ۴�.
	* ���⼭ nPtr�� pointer�̰�, character constant�� ����Ų��.
	* base���� �� ���� �������� ���´�. ���� 0�� ���� �ִٸ�, long int�� ��ȯ�� �� �״�� ��µȴٴ� �ǹ�.
	*			8�̸� 8����, 10�̸� 10����, 16�̸� 16����. 2���� 36 ������ � ���ڷ� ��� ��� ����.

*/

// 6. Standard Input/Output Library Functions - <stdio.h>

/*

	1) int getchar(void); : standard input���κ��� character�� �޾ƿ��� �Լ�. integer�� return��. newline character�� �����

	2) char *fgets(char *s, int n, FILE *stream); 
	: stdin(�����)���κ��� �Է��� �޾ƿ��� �Լ�. newline�̳� EOF�� ���� ������ �Է� ����.
	�� ��° �μ��� ����ڰ� �Է��� �� �ִ� �ִ� ���� ���� + 1�� ��Ÿ��. ���� 80�̶��, 79���� ����ڰ� �Է°����� ��.
	����° �μ��� � ������� �Է��� �޴����� ���� ��. stdin = ����ڷκ��� �Է� �ޱ�

	3) int putchar*(int c); : ĳ���� �ϳ� ����ϴ� �Լ�

	4) int sprintf(char *s, const char *format, ... );
	: formatted data�� ���. conversion specifiers(%s, %d ���� ����������) ��� ����. 
	  int value �� double value�� �迭�� formatted, printed ��.
	  �迭 s�� �����ϰ� ���� ���°� integer�� %6�̰� double�� %7.2�� �����ϰ� ���� ��ó�� �����õ� �� ���忡 ���Ǵ� �Լ�
	
	cf) #pragma warning(disable : 4996) -> disable the arning code 4996 ���

	5) int sscanf(char *s, const char *format, ... ); : ���� �迭���� formatted data�� �о�� �Լ�
	
*/

// 7. String-Manipulation Functions - <string.h>
// ���� ����, ���� �̾� ���̱�, ���� ��, �˻�, ��ū, ����
// strncpy �Լ��� �����ϰ�� ����� null character�� append��


/*
	[����]
	1) char *strcpy(char *s1, const char *s2): ��ü string ����

	2) char *strncpy(char *s1, const char *s2, size_t n)
	: ù ���ں��� n�� character ����, ���� �� ������� �迭�� '\0' �ι��� �ο��ϴ� �� ����. strncpy�� �ι��ڸ� �־����� �ʱ� ������.
	
	[�̾� ���̱�]
	3) char *strcat(char *s1, const char *s2)
	: �� ��° �μ��� ù ��° �μ��� ��ü�� ���̴� ��. ù ��° �μ� �迭 ũ�Ⱑ ����� Ŀ�� �� ��° �μ����� ���� �� ����.

	4) char *strncat(char *s1, const char *s2, size_t n)
	: �� ��° �μ��� n���� ���ڸ� ù ��° �μ��� ���̴� ��.
	 ù ��° �μ� �迭 ũ�Ⱑ ����� Ŀ�� �� ��° �μ����� ���� �� ����.

	[��]
	5) int strcmp(const char *s1, const char *s2);
	: ���ڿ� s1�� s2 ��, ������ 0 �ٸ��� 0���� ũ�ų� ���� �� ����

	6) int strncmp(const char *s1, const char *s2, size_t n);
	: ���ڿ� s1�� ó������ n�������� s2�� ��, ������ 0 �ٸ��� 0���� ũ�ų� ���� �� ����
	  strcspn�� strspn�� size_t�� ��ȯ, �������� char�� ��ȯ

	[�˻�]
	7) char *strchr(const char *s, int c);
	: string�� Ư�� character�� ù ��° ���� ��ġ�� �˷���. ������ �� character�� �����͸�, ������ NULL ��ȯ

	8) size_t strcspn(const char *s1, const char *s2);
	: �� ��° �μ��� ���ڿ� �� character�鿡 ���ԵǾ� ���� ���� ù ��° �μ��� ���ڿ� �� ����.
	�ٸ� �տ������� ���Ƿ� ����� �ڿ��� �������� �װ� �ȼ���

	9) size_t strspn(const char *s1, const char *s2);
	: s2�� character��� ������ s1�� ����


	10) char *strpbrk(const char *s1, const char *s2);
	: s2�� �ִ� ���ڸ� �ϳ��� s1�� ��. s2 ���ڿ��� �����ϴ� ���� �� s1���� ���� �ε����� ���� ���ڸ� ã�Ƴ�.
	  ������ ������ return ������ NULL return.

	11) char *strrchr(const char *s, int c);
	: ���ڿ� s���� c�� ���� ���������� ���Դ��� �˷���. ������ ������ return ������ NULL return.

	12) char *strstr(const char *s1, const char *s2);
	: s2�� s1�� �����Ѵٸ�, ó�� �����ϴ� �ش� ���ۺκ� �����͸� ������.

	[��ū]
	13) char *strtok(char *s1, const char *s2);
	: �����ڸ� ������� ������ �ڸ���. delimiters(������) -> ��ũ����¡�� �ʿ��� ��. ����. ��ū = �߶��� �͵�
	  ������ ��ũ����¡ �Ϸ��� strtok�� ������ ȣ���ؾ���

	[�޸�]
	- �޸𸮸� ���������� �����ϰų� �̾����
	- pointer parameter�� void * �̶�� ��� ������Ÿ���̵��� ����� �� �ִ�. ������ dereferenced �� �� ����, ������ �� �� ����.

	14) void *memcpy(void *s1, const void *s2, size_t n);
	: ����Ʈ ����. string ���纸�� ���� ����. ���� ��ĳ���� ���� �̷��� ����. string ī�� ����.
	  s1���ٰ� s2�� ���� n�� �����ض� !
	  �ΰ��� ��ü�� overlap�� ���� �� undefined�� ��. -> �̷� ��쿡�� memmove ���

	15) void *memmove(void *s1, const void *s2, size_t n);
	: s2�� ī���� temporary array(�ӽ� array)�� ī���صΰ�, �ӽ� �迭���� ������ �ٽ� s1 ����.
	  overlap�̽��� ���� ��.
	  �ι�° �μ��� &x[5]�� �ִ� �ٴ� ����, x �迭�� 6��°���� 10�� ����Ʈ�� �����ؿ��� ��.

	16) int *memcmp(const void *s1, const void *s2, size_t n);
	: n�� �� ����Ʈ ���� ������. �ƽ�Ű�ڵ� ���ڰ����� ��. s1�� s2���� ũ�� 1, ������ -1, ������ 0

	17) void *memchr(const void *s, int c, size_t n);
	: n ����Ʈ �̳��� Ư�� ���� c�� ���� �ش� ��ġ�� �����͸� ����. ��ã���� NULL ������ ����.

	18) void *memset(void *s, int c, size_t n); 
	: s�� n�� ���� ��ŭ c�� ��ȯ

	[����]
	size_t strlen(const char *s);
	: �迭 s�� ���̸� �˷���. �� ĳ���� �����ϰ� ��.

	[��Ÿ]
	char *strerror(int errornum); : ���� �޽����� ����� ���� ��. �ش� �ϴ� �ѹ��� ���� �޽����� ����.
									ex) printf("%s\n", strerror(2)); -> ���� �޽����� �÷������� �ٸ� �� ����
	
	
*/

//=====================================================================================================================================
// 10����: C Formatted Input/Output

// scanf�� �پ��� ���
// <stdio.h> ���

// 1. Streams: sequences of bytes
/*

	- input operations: device���� main memory���� bytes flow
	- output operations: main memory���� device���� bytes flow

	- ���α׷� ����Ǹ� standard input stream, standard output stream, standard error stream

*/


// 2. Formatting Output with printf: ����� ���ϴ� �������� �ϴ� ��
/*
	- format control string: ��� Ÿ��, �Ҽ��� �ڸ�, �¿� ���İ� ���� �پ��� ���
		-> conversion specifiers, flags, field widths, precisions, literal characters

	- ������ ���
		: ���ϴ� �ڸ�����ŭ �ݿø�, �Ҽ����� �������� ����, �¿� ����, Ư�� ��ġ�� ���� ���,
		  10e+3(=10*10^3)�� ���� exponential format, 8/16����, �ʺ� ����
*/

// 3. Printing Integers
/*
	- d
	- hd: shortŸ�� ����
	- i: d�� ���� ���. �ٸ� scanf������ ����� ���� �޶���
	- o: unsigned 8����
	- u: unsigned ����
	- x or X: unsigned 16����, x�� �ҹ��ڷ� a~f ���, X�� �빮�ڷ� a~f ���
	- h, l or ll: ���� short, long, long long Ÿ�� �ǹ�

	cf) printf("%ld\n", 200000000000L); -> L ���� ������ �� ��µ�

*/

// 4. Printing Floating-Point Numbers
/*

	- e or E: exponential notation
	- f or F: 
	- g or G:
	- L: long double floating point value

	cf) 150.4582 = 1.504582 * 10^2 = 1.504582E+02

	- e, E, f�� ���� �� ��� ����Ʈ�� 6�ڸ��� �Ҽ��� �ڸ��� ����ϰ� ��. �ٲٰ� ������ ����������.
	- f�� ���� �� ��� �Ҽ��� �������� ���ʿ� �ּ� �� �ڸ��� ���ڰ� �־�� ��(�� �ڸ� �̻� ������ ��)
	- �ٸ� e�� ���� �� ��� �Ҽ��� �������� ���ʿ� �� �ڸ��� ����'��' �־�� ��
	- g�� G�� ����� ��� ���� �Ҽ��� �ڸ��� 0�� ä������ ����
							exponent�� -4���� �۰ų�, 6�̻��� ������ e�� ����� ��µ�
							�������� ��Ȳ�� f�� ����� �Ͱ� ����.
							ex) 0.0000875�� 8.75e-05�� ��µ�. 8750000.0�� 875e+06���� ��µ�.
							
							����, �Ҽ��� ���ʱ��� �����ؼ� �� �ڸ��� ����Ұų��� ����.(�Ҽ����� ���� �ȵ�._
							ex) 1234567.0�� 1.2345'7'e+6���� ��µ�.

*/

// 5. Printing Strings and Characters
/*

	- String�� ����� ������ �ι��� '\0'�� ���� ������ ���������, ���� �� ���ڰ� ���ٸ� zero byte�� �� ������ ���

	- String ��� 3���� ���
	1) ���� ��Ʈ�� ���ͷ� �ֱ�
	printf("%s\n", "This is a string");

	2) char array �̿�
	char string[] = "This is a string";
	printf("%s\n", string);

	3) char pointer ����� ���
	const char *stringPtr = "This is also a string";
	printf("%s\n", stringPtr);
	  
	- %c�� string��, Ȥ�� %s(character pointer�� �����)�� character�� ����Ϸ��� �ϸ� error�� �߻���

	- string�� ''�� ���η��� �ϸ� syntax error �߻�

	- double quotes�� character constant�� ������� �ϸ� string pointer�� ��������� �ϴµ�,
	  �̶����� character �ϳ��� ���ԵǴ°� �ƴ϶� �ι��� ������ 2�� ���ڰ� ��
	  
*/

// 6. Other Conversion Specifiers.
// %p - ������, %% - % ��ü

// 7. Printing with Field Widths and Precision
// field width�� �����ͺ��� ũ�� �����Ͱ� ������ ���ĵ�
// field width�� ��� conversion specifiers���� ��� ����
// ������� ���� field width�� ȥ���� �߱��� -> �����ϴ��� ���ļ� �˾Ƽ� ��µǹǷ� ����� �ȵ����� ����
// - ���̳ʽ� �� ���� ��ȣ�� �� �ڸ��� ������.

// 7. Specifying Precisions for Integers, Floating-Point Numbers and Strings
// precision�̶� ����� �ּ� ���� ����. ���⿡ ���� ����ϱ� ���� 0�� ä�����ų� ������ �߰��� �� ����
// e, E, f�� precision�� �Ҽ����� �������� �����ʿ� 6�ڸ����� ����Ѵٴ� ��.
// g, G������ ��µ� �� �ִ� �ִ� �ڸ�. (�Ҽ��� �յ� ��� ����)
// s�� precision�� string�� �տ������� �����ؼ� ����� �ִ� ������ �ǹ�
// ������ precision�� �����ϸ� ������ �տ� 0�� ä����. 873 -> 0873

// ����
// printf("%*.*f", 7, 2, 98.736);
// - field width = 7, precision = 2
// ���: __98.74

// 8. Using Flags
// printf���� ��� ������ flag�� �� 5���� -> % ������ �ٷ� �����ʿ� ����ϸ� flag��� �νĵ� �� ����.
// ���������� �ȿ��� �������� flag ��� ����

/*

	-(minus sign): ���� ����
	+ : ����� + ���� �߰�
	space : ��� �տ� ���� �߰�
	# : 8���� ���������� o ��� �տ� 0 �־���, 16���������� �տ� 0x�� 0X �־���.(�̰� ���������� x�� ��ҹ��������� ���� �޶���)
		���������� g �տ��� ���Ǹ� decimal point ����(1427 -> 1427.00)
	0: ����ִ� ���� 0�� ä��

*/

// 9. Printing Literals and Escape Sequences
// �齽������ �������� Escape Sequences��
/*

	\' : '
	\" : "
	\? : ?
	\\ : \
	\a : �˸��Ҹ� ����.
	\b : backspace
	\f : 
	\n
	\r : �ش� ���� ù �������� Ŀ���� ���ư�
	\t
	\v : vertical tab

*/

// 10. Reading Formatted Inut with scanf
// scanf������ format control string ��� ����
// 
// scanf(format-control-string, other-arguments);
// 
// scanf�� �Է� ���� ���
// 1) ��� Ÿ���� ������ �Է�
// 2) input stream���� ������ Ư���� ĳ���͵��� �Է��ϴ� ��
// 3) input stream���� ������ Ư���� ĳ���͵��� �����ϴ� ��

// 11. scanf Conversion Specifiers
/*
	[Integers]
	1) d: signed ����
	2) i: signed ����, 8����(0 prefix �߰��Ͽ� �Է�), 16����(0x prefix �߰��Ͽ� �Է�)
	3) o: 8������ �޾Ƶ���
	4) u: unsigned ����
	5) x or X: 16����
	6) h, l, ll: short, long, or long long ����

	[Floating-point numbers]
	7) e, E, f, g, G
	8) l or L
	
	[Characters and strings]
	9) c
	10) s

	[Miscellaneous]

	cf) ����ڿ��� �� �� �Է� �޾� ���� %c�� %8s�� ������ ���� ����

*/

// 12. Using Scan Sets
// sequence of characters�� scan set ����
// [] ���. ��Ī�� �Ǹ� ���ڿ��� �����
// ��Ī�� �ȵǸ� �������� �ʰ�, �� �־���
/*


	char z[9];

	printf("%s", "Enter string: ");
	scanf("%8[aeiou]", z); -> [aeiou]�� vowels

	printf("The input was \"%s\"\n", z);

	==> ���
		Enter string: ooeeooahah
		The input was "ooeeooa"


*/


// inverted scan set -> ^�� ������ search for nonvowels
/*


	char z[9];

	printf("%s", "Enter string: ");
	scanf("%8[^aeiou]", z);

	printf("The input was \"%s\"\n", z);

	==> ���
		Enter string: String
		The input was "Str"


*/

// 13. Using Field widths with scanf
// : Ư�� ���� �ڸ����� �޴µ� ����� �� ����. ex) 123456 �Է½� -> %2d%d�� ���� 12�� 3456���� �и��� �ޱ� ����

// 14. Skipping Characters
// ex) scanf("%d-%d-%d", &month, &day, &year);  =>  �뽬 ��ü ���� ����
// ex) scanf("%d%*c%d%*c%d", &month, &day, &year);  => � ���ڵ� ���� ����. 11/18/2012 �Է½� /�� ���õ�

//=====================================================================================================================================
// 11����: C Formatted Input/Output
// - C File Processing
// - C Structures

// 1. Files and Streams
// C���� ������ �ν��ϴ� ����� byte�� �������� �帧�̴�.
// ������ ���ϵ��� EOF marker�� ������ �ְų� �Է� ������ �ִ� byte�� ������ ���� = �츮���Դ� ������ ����. ���� �� �� ����.
// 0~n-1���� ������, n���� EOF

// 2. Standard Streams in Every Program
// ���α׷��ְ� ���� ó�� �ƶ������� stream�� sequence of data elements�� �ǹ���. (����, ��Ʈ��ũ ����, �޸� ... ��)
// ������ ����Ǹ� ���� 3���� ��Ʈ���� �����. standard input, standard output, standard error
// 
// 1) Communication Channels�μ��� Stream: ���ϰ� ���α׷��� ������ �����ϰ� ��
//											standard input�� Ű����κ��� �����͸� �о���ų�
//											standard ouput�� ȭ�鿡 �����͸� ����ϰ� ��
// 
// 2) FILE Structure: ������ ���ԵǸ� FILE structure(<stdio.h>)�� �����͸� return�ϰ� ��. stdin, stdout, stderr�� �ڵ�󿡼� ���
// 
// 3) File-Processing Function - fgetc
// : getchar�� ����. ���Ϸκ��� �ϳ��� character�� �о��. �μ��� FILE pointer�� ����.
//	 fgetc(stdin)�� getchar() ȣ��� ����� ����
//
// 4) File-Processing Function fputc
// : putchar�� ����. ���Ͽ� �ϳ��� character�� ����. �μ��� ���Ͽ� ���� character�� �ش� ���ڰ� ���� ������ �����͸� ����.
//   fputc('a', stdout)�� putchar('a') ȣ��� ����� ����
// 
// 5) Other File-Processing Functions
// : fgets�� fputs�� ���� ���Ͽ��� �� ���� �а�, �� ���� ���� ����� �����

// 3. Creating a Sequential-Access File = ������������
// ex) ������� �ý���: ���¹�ȣ, �̸�, �ܰ� => �� Ŭ���̾�Ʈ�� record�� ����
//                      => ���¹�ȣ�� record key�μ� ���Ǹ� �̰��� ������ �������� ������ ��������� ������ ��
// ������ �� ������ ��. ���� ������ ������ ����� �װ� ����.
// ���� ���� ��ο� ���� �̸��� ������ �ִٸ� ��� ���� �� ���Ͼȿ� ��� ���� �������� ���� ���̴� ��
// eof�� ������ nonzero ����, �ƴϸ� 0 ����.
/*

	fprintf�Լ��� ���� �����Ϳ� ���� �����͸� �޾Ƽ� ���Ͽ� �����͸� ���´�.
	���� ù ��° �μ��� ���� ������ ��� stdout�� ���´ٸ�, prinf�� ������ ȿ���� ����
	ex) fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);

*/
// ��� �Է��� ����ǰ� ����Ǿ��ִ� ������ ���� ������ housekeeping�̶�� ��.

// 4. File Open Modes
/*

	r : reading
	w : writing, �ִ� �����͵��� ���󰡰� ���� �������
	a : append, �����Ͱ� �������� ����

	r+ : update(reading and writing)�ϱ� ���� ���� open
	w+ : reading and writing�ϱ� ���� ���� create. ���� �̹� ������ �ִٸ� �� ������ ��� �����͵��� ���ư��� ����
	a+ : reading and updating�ϱ� ���� ������ open�ǰų� create��. eof�� ������ ��� writing�� ����. append ������ ��.

	rb : binary mode�� �����ϴ� file�� reading�ϱ� ���� open
	wb : binary mode�� �ۼ��ϱ� ���� ���Ϥ��� create. ���� �̹� �ִٸ� �� ������ ��� �����͵��� ���ư��� ����
	ab : binary mode�� eof�� ���� ������ �ۼ��ϱ� ���� ������ open�ϰų� create. (append)

	rb+ : binary mode�� update(reading and writing)�ϱ� ���� ���� open
	wb+ : binary mode�� update�ϱ� ���� ���� create. ���� �̹� �ִٸ� �� ������ ��� �����͵��� ���ư��� ����
	ab+ : binary mode�� update�ϱ� ���� ������ open�ϰų� create��.

*/

// 5. Random-Access Files
// record�� ��� ���� ������ �ʿ�� ������, �����������Ͽ����� record�� ������ ���̶�� ������
// ���Ǵ� ��: �װ����� �ý���, banking systems, point-of-sale systems, transaction-processing systems that require rapid access
// ���� ������ �ʿ��� �� ������������ ���
// 
//	1) Creating a Random-Access File
// 
//		- fwrite �Լ�
//		: ������ Ư�� ��ġ���ٰ� Ư�� ����Ʈ �� ��ŭ�� ����. �迭 ���� ����
//			fseek�Լ��� ���� ����ϸ�, ������ Ư�� ��ġ�� ������ ���� ����
//		ex) fwrite(&number, sizeof(int), 1, fPtr);   =>  number �������� 4����Ʈ��ŭ�� �о� fPtr�� ����Ű�� ���Ͽ� ���� ��
//														���⼭ 1�� number of elements in the array�� �ǹ�
// 
//		- fread	�Լ�
//		: ������ Ư�� ��ġ�� Ư�� ����Ʈ �� ��ŭ�� ���� �� ����. �迭 �б� ����
//		ex) fread(&client, sizeof(struct clientData), 1, cfPtr); => �ϳ� �д´ٴ� �ǹ��� 1, �ϳ� �̻� �а� ������ �а� ���� ��� ���� ������ ��.
// 
//	
//		- int fseek(FILE *stream, long int offset, int whence);
//				File structure, ��ŭ �̵��ϴ� ���� ���� ����Ʈ ��, seek�� ���۵Ǵ� ��ġ�� ����Ŵ
//				
//				����° �μ�(positive offset�� forward, negative offset�� backward)
//				SEEK_SET : ������ ó������ ����. ������ ó������ offset��ŭ �̵��ϰڴ�. positive offse
// 				SEEK_CUR : ������ ������� ����. ������ ������� offset��ŭ �̵��ϰڴ�. p/n ����
//				SEEK_SET : ������ ������ ����. ������ ���������� offset��ŭ �̵��ϰڴ�. negative offset
// 
//		* cfPtr�� ����Ű�� ���� ������ �����Ͱ� ����Ʈ �ѹ� 5�� ������ ������ �ε��� 5��� ��ġ�� ����

// 6. Structure
// �迭���� ������: ���� �ٸ� ������ Ÿ�Ե� ���� �� ����
// typedefs: ������ ������ִ� ��


// 1) ����
/*
	
	* structure definitions : �̰͸� ������� �޸� �� ������ �������� ����. �����ؾ���. do not reserve any space in memory
	struct card {		=> ���⼭ card�� structure tag�� �ǹ�
		char *face;		=> �߰�ȣ �ȿ� �ִ� �͵��� structure's members��� ��
		char *suit;
	};
	
	* �ΰ��� ���� �ٸ� ����ü �ȿ����� ���� �̸��� �־ �������
	* structure ���Ǵ� �����ݷ����� ������ ��
	
	-----------------------------------------------

	* self-referential structures : ���� structure Ÿ���� ����� ������ ��
	struct employee2 {
		char firstName[20];
		char lastName[20];
		unsigned int age;
		char gender;
		double hourlySalary;
		struct employee2 teamLeader;	=>	ERROR
		struct employee2 *teamLeader;	=>	����(�����ʹ� ������)

*/

// 2) ����
/*

	struct card aCard, deck[52], *cardPtr;	=> �̹� ���ǵ� ��, ���� �̷��� ����. struct card������ type�� ��.

	struct card {
		char *face;
		char *suit;
	} aCard, deck[52], *cardPtr;  =>  comma-separated list�� ����� ���� ����. ���ǿ� ���� ���ÿ�.

*/

// 3) �ʱ�ȭ
/*

	initializer lists ���.
	struct card aCard = { "Three", "Hearts" };

	���� ����ü�� ������� ���� ���� �ʱ�ȭ �Ѵٸ� ���� �κ��� 0���� �ʱ�ȭ�ǰ� ������ ������ ����� NULL�� �ʱ�ȭ��.

	���� Ÿ���� �ٸ� ����ü�� �ʱ�ȭ ����. struct card aCard�� struct card bCard�� �ʱ�ȭ ����. bCard�� �Ϻθ� ������ ���� ����.

*/

// 4) Operators
/*

	structure member operator(.) = dot operator
	structure pointer operator(->) = arrow operator

	struct card aCard;
	struct card *cardPtr = &aCard;
	printf("%s", cardPtr->suit); �� printf("%s", aCard.suit); �� printf("%s", (*cardPtr).suit ); �� ���� ����� ����
	
	
*/

// 5) Using Structures with Functions
/*

	Structure may be passed to functions by
	- individual structure members
	- an entire structure
	- a pointer to a structre

	�Լ��� passing�� ������ ��� passed by value�� ���޵�. ������ �Ұ���
	pass the address�� ���� by reference. 

*/

// 6) typedef : ���ο� Ÿ���� ����� ���� �ƴϴ�.
/*

	typedef struct card Card;

	* sturcture definition�� typedef�� ����ϸ�, structure tag�� �ʿ����� �ʰԵ�
	typedef struct {
		char *face;
		char *suit;
	} Card;

	=> ������ ������ struct card deck[52]; ����  Card deck[52]; �� ���� ��

*/

//=====================================================================================================================================
// 12����: Introducing Object Technology 
// 
// 1. C++
// - ��ü���� ���α׷���(OOP)
// - ����Ʈ������ ���꼺�� ���뼺�� ���� -> ������ ȿ���� ���� (C���� ������)
// - Bjarne Stroustrup�̶�� Bell �����ҿ� �ִ� ���� ����
// - �ּ� ǥ��� C���� ����
// - <stdio.h>�� ������ ���� <iostream>
// 
// - ���ȣ�� void�� ���� ����. C������ �� ��ȣ�� �������� ����. runtime errors�� �߻���ų �� �ֱ� ����
// 
// - std::cout�� �ǹ�: standard output stream object
// - ��ȣ << �� �ǹ�: stream insertion operator
// - std::cout�� "Entre first integer: "��� string�� ���� ��.
// 
// - std::cin�� �ǹ�: standard input stream object
// - ��ȣ >> �� �ǹ�: stream extraction operator
// 
// - std::endl�� �ǹ�: stream manipulator
// - outputs a newline, buffer ����.
// 
// - std:: �ݺ�
// - namespaces �ȿ� cout, cin, endl ���� �ִ�.
// - using�� ���� �ݺ� ��� ���Ѵ�. (namespace std�� ����� �Ŵٸ� �˷���)
// 
// - concatenated stream output: �������� ���� �ٸ� Ÿ���� ������ �� ���� ����� �� �ְ� ��.
//								��ȣ <<�� ��� ������� �˰� �ִ�.
// 
// - C++���� �����Լ����� return�� �ʿ����� �ʴ�.(�ʼ��� �ƴ�)
// 
// - .h�� ������ ��������� "old-style" header file��.
//		�ٸ� ����ڰ� ������ ��������� #include�� ȣ���� �� �־ .h�� ���������
//
// - Inline Functions
//	* �Լ��� ����ϴ��� �Դٰ��� �ϴ� �������� execution-time overhead�� ������ �� ����
//	* inline function�� function call overhead�� ���̴� �� ������ ��. Ư�� ���� �Լ�����.
//	* inline�� qualifier�μ� ����. �Լ��� ���� Ÿ�� �տ� ���ָ� �� �Լ� �ڵ��� ī�Ǹ� ���� �ٷ� �� �ڸ����� ���纻�� �����ϰ� ��
//  * small function�� �ƴѵ� inline�� ����ϸ� ������ ���α׷��� ũ�� ���� �� �ִ�.
//	* �̷��� ���״� �����Ϸ��� inline �������̾ �ڵ� �����ϱ⵵ ��
//	* C++�� bool Ÿ�� ����. boolean values(true/false) => ���� 1 �̳� 0�� �ƴ� ��, ������ 0 �̳� null pointer
// 
// - Reference Parameters(performing pass-by-reference)
//		* �Լ��� ������Ÿ���̳� ���Ǹ� ���� �ʰ�� �� �Լ��� pass-by-value����, pass-by-reference���� �� �� ����
//		* type-safe linkage: �����Ϸ��� Ÿ�Ե��� �� �������� �ҷ����� �ִ����� �˻���. �� ������ error ����
// 
// - References as Aliases within a Function
/*

	int count = 1;		=> ���� ����
	int &cRef = count;	=> cRef�� count�� alias��.
						   reference variable�� ����� ���ÿ� �ʱ�ȭ�� �Ǿ�� ��
						   �ٸ� variable�� alias�� �ٽ� reassigned�� �� ����.
	cRef+;	=> count ����(cRef�� �˸��ƽ��μ� ���)

	* �Լ��κ��� references�� return�ϴ� ���� �����ϴ�.
	* �Լ� �ȿ��� reference variable�� declared�� ���, static�̾�� �Ѵ�.
	* ���� �׷��� ������, �Լ��� ������ڸ��� ������ ������� �ǹǷ� ������ undefined�ǰ�, ���α׷��� unpredictable������.
	* �̷��� undefined references variables�� dangling references��� �θ�

*/
//
// - Default Arguments: �⺻���� ������ �ִ� �μ���
//	* ���� �����ʿ� ��ġ�ؾ��ϴ� �μ�(rightmost)
//	* function prototype�̳� header���� ��õǾ�� ��
//	* ���޵��� ���� ������ default������ ���ȴ�.
// 
// 
// - Unary Scope Resolution Operator(::) : ���������� ���������� �̸��� ���� �� �������ִ� ����
//	* ��� �ۿ����� ���� �� ����. ::�� ���� �̸��� ���������� ���� scope�� ���� �� ���������� ������ �� �ְ� �Ѵ�.
/*

	int number = 7;  => ��������

	int main()
	{
		double number = 10.5;  => ��������

		cout << "Local double value of number = " << number
			<< "\nGlobal int value of number = " << ::number << endl;  => ::number ���!
	}

*/

// - function Overloading(�Լ��� ����) : ���� �̸��� �Լ����� �μ����� Ÿ���� �ٸ� ���.
//	* �����Ϸ��� �˾Ƽ� ������ ���
// 
// - function Templates
// * single function template�� �����صθ� ���� overloaded functions�� ����� �� ����
// * template Ű���� �ʿ�. angle brackets(<>)�� ����ؼ� ����.
// * header ���� �ۼ��� ���Ǵ� ��. ���߿� �� ��������� include �������.
// 
// - OOD(Object-Oriented Design) and Inheritance
//	* ������ ����(have much in common)
//	* ���(inheritance relationships) : � Ư�� Ŭ������ ��� ���� ��, �θ� Ŭ������ ���� �Ӽ��� �ڽ� Ŭ������ �߰��� ���� ����
//  * ��ü ������ communication ��
//	* ĸ��ȭ(Encapsulation -> information hiding) : �ۿ����� �Ⱥ���. �ڵ����� ������ �� �� ������ ������ ������ ������ ����. �ۿ��� ����/�������� ���ϰ� ��(���α׷� ���� ����)
//
// - �ݸ鿡 C�� ����������μ�, action oriented�ϴ�. function unit
// - C++�� ��ü���� ���. object-oriented programming�̴�. class unit
//		�Լ����� Ŭ���� �ȿ� ���ǵǾ� ����.
// - �ٸ� ����ڵ��� ������ built-in types�� ��밡���ϰ�,
//	�ڽ��� ���� ������ ���� �ִ�. 
// 
// - Ŭ���� ���� ������ ��ҵ��� data members��� ��.
// - Ŭ���� �ȿ� �Լ� ��ҵ��� member functions��� ��.
// - Ŭ���� ���� û�������μ� ���� �� ����(blueprint)
// - ���� �ٸ� Ŭ���� ���� ���輺�� associations��� ��

//=====================================================================================================================================
// 13����: Introduction to Classes, Objects and Strings

// - set �Լ����� mutators��� �Ҹ�
// - get �Լ����� accessors��� �Ҹ�

// Constructors(������)
/*

	- constructor�� special member function����,
	  Ŭ������ ���� �̸��̾�� ��
	- �����ڴ� return���� �ʰ�, void�ε� ǥ������ �ʴ´�.
	- �����ڴ� ���� public���� ����ȴ�.
	- �����ε��� ���ؼ� ���� ���� ������ ��� ����

*/

// Separating Interface from Implementation
/*

	Interface: �� Ŭ������ ��� �����Ǿ��ִ°�, ��� ����� �� �ִ°�, ��ȣ�ۿ��� ��Ÿ��
				�����ڿ� member functions���� ���� �� ����

	implementation: Interface �� �̻��� ���� ������� implementation�� ��

	Interface�� implementation�� ��� Ŭ���� �̸��� �����ؾ���

	class name :: function   =>   scope resolution operator ( �� �־�� �� )


*/


//=====================================================================================================================================
// 14����: Introduction to Classes, Objects and Strings
// - Classes: A Deeper Look; Throwing Exceptions
//  -Object-Oriented Programming : Inheritance

/*

	include guard in headers : �ڵ� �ߺ��� ����

	#ifndef TIME_H	=> if not defined
	#define TIME_H	=> �׷��ٸ� �� ������� include
	...�ҽ��ڵ� �ۼ�...
	#endif	=> close ����
*/

// Destructor(�Ҹ���) -> special member function
/*

	- tilde character(~) ���
	- �����ڿ� �ݴ�Ǵ� ����
	- �Ϲ������� ȣ��Ǵ� ��. ��ü�� ������� destructor�� ȣ���
	- termination housekeeping: ����� ������� �˷��ִ� ����
	- �츮���� �������� �ʰ� ���������� ȣ���
	- 2�� 4�� ������ �����ڰ� ȣ��Ǿ��ٸ� �Ҹ��ڴ� 4�� 2�� ������ ȣ���
	- �Ҹ��� ȣ�� ������ ���� - static - �۷ι�

	1. Global Scope�� ���� �����ڿ� �Ҹ���
	1) ���α׷��� ���۵Ǿ��� �� ������ ȣ���
	2) main �Լ� ����Ǹ� �Ҹ��� ȣ���
		* functinon exit: ���α׷� ��� ����.
		* function abort: ���α׷� ��� ����. � ��ü�� �Ҹ��ڵ� ȣ������ �ʰ� ������
	
	2. Local Objects�� ���� �����ڿ� �Ҹ���
	1) Local Object�� ����������� �����ڰ� ȣ���
	2) object�� scope�� ��� �� �Ҹ��ڰ� ȣ���
		* exit�� abort �Լ��� ȣ��Ǹ� ���� ��ü�� ���� �Ҹ��ڴ� ȣ����� ����.

	3. static Local Object�� ���� �����ڿ� �Ҹ���
	1) ���ǵǴ� ������ �����ڰ� ȣ���. �̶� �� �� ���� �����ڰ� ȣ���.
	2) main �Լ��� ����ǰų� exit �Լ��� ȣ��Ǹ� �Ҹ��ڰ� ȣ���

*/

// Introduction(���)
/*

	base class, super class(�θ� Ŭ����) - general, larger
	derived class, sub class(�ڽ� Ŭ����) - specific, subset

	public, protected, private ���

	- ���⼭ public ���
	: �ڽ� Ŭ������ ��� ��ü�� �θ� Ŭ������ ��ü�� �ȴ�.

*/

// Class Hierarchy( = is-a relationship. �ڽ� Ŭ���� is a �θ� Ŭ����)
// : ����� ���踦 ������ �ȴٸ� ���輺 �ִ� Ŭ����

// ������ �ڽ��� �ƴ� Ŭ�����鿡�� indirect base class
// ������ �ڽ��� Ŭ�����鿡�� direct base class

// �ڽ� Ŭ�������� �Լ��� ���� �θ� Ŭ������ private members�� ������ �� ����

/*

	single inheritance: �θ� Ŭ���� 1��
	multiple inheritance: �θ� Ŭ���� 2�� �̻� - ����Ǵ� ����� �ƴ�

	ex) class TwodimensionalShape : public Shape  =>  Shape Ŭ������ public ���

	protected ���: ��ӵ� Ŭ���������� ���������� ���� ����

*/


