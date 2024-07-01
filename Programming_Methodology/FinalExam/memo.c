
//=====================================================================================================================================
// 9주차: C Characters and Strings

// 1. 문자(Character)
// 알파벳 하나만을 표현할 때 character(문자)라고 함
// character constant(문자 상수): single quotes(작은 따옴표)를 이용하여 나타냄.
//								  정수 값을 가지게 된다. (아스키코드 ASCII)			ex) '\n'은 아스키코드로 10을 가진다.

// 2. 문자열(String)
// 문자, 숫자, 특수기호까지 합쳐져서 만들어질 수 있는 것을 string(문자열)이라고 함
// String literals = String constants: double quotation marks(큰 따옴표)를 이용하여 나타냄.
//									   마침표, 숫자, 쉼표, 괄호나 하이픈 같은 chracter들도 string constants로 인식됨
//									   문자열은 문자의 배열이므로 마지막에 null character('\0')가 들어가야 함(word[20]에는 19문자만 입력받을 수 있음)
//									   (첫 번째 문자를 가르키는 포인터로서 접근 가능, 배열이면서 포인터인 것)

// - 정의 방법
/*
	1) char color[] = "blue";
	2) const char *colorPtr = "blue";
	3) char color[] = { 'b', 'l', 'u', 'e', '\0' };
	
*/

// 3. scanf
// scanf는 space, tab, newline과 같은 EOF(end-of-file) 문자가 나올 때까지 입력 받는다.

// 4. Chracter-Handling Library - <ctype.h>

/*
	1) int isblank(int c);
	2) int isdigit(int c); : 0-9사이 숫자인지 판별
	3) int isalpha(int c); : 대소문자 상관없이 알파벳인지 검사
	4) int isalnum(int c); : 대소문자 상관없이 알파벳인지 숫자인지 검사
	5) int isxdigit(int c); : 16진수 정수인지 판별(A-F, a-f, 0-9)
	6) int islower(int c); : 소문자 알파벳인지 판별
	7) int isupper(int c); : 대문자 알파벳인지 판별
	8) int tolower(int c); : 대문자를 소문자로 변환(변환을 할 게 없는 경우에는 그대로)
	9) int toupper(int c); : 소문자를 대문자로 변환(변환을 할 게 없는 경우에는 그대로)
	10) int isspace(int c); : whitespace characters인
							space(' '), form feed('\f'), newline('\n'), carriage return('\r'), horizontal tab('\t'), vertical tab('\v')
							과 같은 입력이 들어왔을 때 true 리턴
	11) int iscntrl(int c); : control characters인
							alert('\a'), form feed('\f'), newline('\n'), backspace('\b'), carriage return('\r'),
							horizontal tab('\t'), vertical tab('\v')
							과 같은 입력이 들어왔을 때 true 리턴
	12) int ispunct(int c); : space나 digit 또는 letter가 아닌 출력 가능한 기호일 경우에 true를 리턴($, #, (, ), [, ], {, }, ;, :, %)
	13) int isprint(int c); : space까지 포함해서 화면에 출력 가능한 문자일 경우에 ture를 리턴
	14) int isgraph(int c); : isprint와 같지만 space character가 포함되지 않음

*/

// cf) conditional operator(?:)

// 5. String-Conversion Functions - <stdlib.h> 
// : 여기에 있는 함수들은 기본적으로 문자열 안에 숫자로 되어있는 문자들을 숫자 값으로 변환시켜 줌(연산이 가능하도록)

/*

	1) double strtod(const char *nPtr, char **endPtr); : string을 double(d)로 바꾼다. 변환 못하면 0 return. char*의 포인터라는 의미로 ** 두 개
	2) long strtol(const char *nPtr, char **endPtr, int base); : string을 long(l)으로 바꾼다.
																나머지 부분이 필요 없다면 두 번째 인수에 NULL을 쓰면 됨
	3) unsigned long strtoul(const char *nPtr, char **endPtr, int base); : string을 unsigned long(ul)으로 바꾼다.
	* 여기서 nPtr은 pointer이고, character constant를 가리킨다.
	* base에는 몇 진수 숫자인지 적는다. 만약 0이 적혀 있다면, long int로 변환된 후 그대로 출력된다는 의미.
	*			8이면 8진수, 10이면 10진수, 16이면 16진수. 2에서 36 사이의 어떤 숫자로 적어도 상관 없음.

*/

// 6. Standard Input/Output Library Functions - <stdio.h>

/*

	1) int getchar(void); : standard input으로부터 character를 받아오는 함수. integer로 return함. newline character가 따라옴

	2) char *fgets(char *s, int n, FILE *stream); 
	: stdin(사용자)으로부터 입력을 받아오는 함수. newline이나 EOF가 들어올 때까지 입력 받음.
	두 번째 인수는 사용자가 입력할 수 있는 최대 문자 개수 + 1을 나타냄. 만약 80이라면, 79까지 사용자가 입력가능한 것.
	세번째 인수는 어떤 방식으로 입력을 받는지에 관한 것. stdin = 사용자로부터 입력 받기

	3) int putchar*(int c); : 캐릭터 하나 출력하는 함수

	4) int sprintf(char *s, const char *format, ... );
	: formatted data를 출력. conversion specifiers(%s, %d 같은 형식지정자) 사용 가능. 
	  int value 나 double value가 배열로 formatted, printed 됨.
	  배열 s에 저장하고 싶은 형태가 integer는 %6이고 double은 %7.2로 저장하고 싶은 것처럼 포매팅된 값 저장에 사용되는 함수
	
	cf) #pragma warning(disable : 4996) -> disable the arning code 4996 기능

	5) int sscanf(char *s, const char *format, ... ); : 문자 배열에서 formatted data를 읽어내는 함수
	
*/

// 7. String-Manipulation Functions - <string.h>
// 문자 복사, 문자 이어 붙이기, 문자 비교, 검색, 토큰, 길이
// strncpy 함수를 제외하고는 결과에 null character를 append함


/*
	[복사]
	1) char *strcpy(char *s1, const char *s2): 전체 string 복사

	2) char *strncpy(char *s1, const char *s2, size_t n)
	: 첫 문자부터 n개 character 복사, 복사 후 만들어진 배열에 '\0' 널문자 부여하는 게 좋음. strncpy는 널문자를 넣어주지 않기 때문에.
	
	[이어 붙이기]
	3) char *strcat(char *s1, const char *s2)
	: 두 번째 인수를 첫 번째 인수에 전체를 붙이는 것. 첫 번째 인수 배열 크기가 충분히 커야 두 번째 인수까지 담을 수 있음.

	4) char *strncat(char *s1, const char *s2, size_t n)
	: 두 번째 인수의 n개의 문자를 첫 번째 인수에 붙이는 것.
	 첫 번째 인수 배열 크기가 충분히 커야 두 번째 인수까지 담을 수 있음.

	[비교]
	5) int strcmp(const char *s1, const char *s2);
	: 문자열 s1과 s2 비교, 같으면 0 다르면 0보다 크거나 작은 값 리턴

	6) int strncmp(const char *s1, const char *s2, size_t n);
	: 문자열 s1의 처음부터 n개까지만 s2와 비교, 같으면 0 다르면 0보다 크거나 작은 값 리턴
	  strcspn과 strspn만 size_t로 반환, 나머지는 char로 반환

	[검색]
	7) char *strchr(const char *s, int c);
	: string의 특정 character의 첫 번째 등장 위치를 알려줌. 있으면 그 character의 포인터를, 없으면 NULL 반환

	8) size_t strcspn(const char *s1, const char *s2);
	: 두 번째 인수의 문자열 속 character들에 포함되어 있지 않은 첫 번째 인수의 문자열 속 길이.
	다만 앞에서부터 세므로 끊기고 뒤에서 나오더라도 그건 안세짐

	9) size_t strspn(const char *s1, const char *s2);
	: s2의 character들로 구성된 s1의 길이


	10) char *strpbrk(const char *s1, const char *s2);
	: s2에 있는 문자를 하나씩 s1과 비교. s2 문자열을 구성하는 문자 중 s1에서 가장 인덱스가 작은 문자를 찾아냄.
	  있으면 포인터 return 없으면 NULL return.

	11) char *strrchr(const char *s, int c);
	: 문자열 s에서 c가 언제 마지막으로 나왔는지 알려줌. 있으면 포인터 return 없으면 NULL return.

	12) char *strstr(const char *s1, const char *s2);
	: s2가 s1에 등장한다면, 처음 등장하는 해당 시작부분 포인터를 리턴함.

	[토큰]
	13) char *strtok(char *s1, const char *s2);
	: 구분자를 기분으로 문장을 자른다. delimiters(구분자) -> 토크나이징에 필요한 것. 기준. 토큰 = 잘라진 것들
	  문장을 토크나이징 하려면 strtok를 여러번 호출해야함

	[메모리]
	- 메모리를 직접적으로 복사하거나 이어붙임
	- pointer parameter가 void * 이라면 어느 데이터타입이든지 사용할 수 있다. 하지만 dereferenced 할 수 없고, 사이즈 알 수 없음.

	14) void *memcpy(void *s1, const void *s2, size_t n);
	: 바이트 복사. string 복사보다 빠른 연산. 끝에 널캐릭터 복사 이런거 없음. string 카피 가능.
	  s1에다가 s2의 것을 n개 복사해라 !
	  두개의 객체가 overlap이 있을 때 undefined가 됨. -> 이런 경우에는 memmove 사용

	15) void *memmove(void *s1, const void *s2, size_t n);
	: s2를 카피해 temporary array(임시 array)에 카피해두고, 임시 배열에서 복사해 다시 s1 넣음.
	  overlap이슈는 없게 됨.
	  두번째 인수에 &x[5]를 넣는 다는 것은, x 배열의 6번째부터 10개 바이트를 복사해오는 것.

	16) int *memcmp(const void *s1, const void *s2, size_t n);
	: n은 몇 바이트 비교할 것인지. 아스키코드 숫자값으로 비교. s1이 s2보다 크면 1, 작으면 -1, 같으면 0

	17) void *memchr(const void *s, int c, size_t n);
	: n 바이트 이내에 특정 문자 c가 나온 해당 위치의 포인터를 리턴. 못찾으면 NULL 포인터 리턴.

	18) void *memset(void *s, int c, size_t n); 
	: s에 n개 글자 만큼 c로 변환

	[길이]
	size_t strlen(const char *s);
	: 배열 s의 길이를 알려줌. 널 캐릭터 제외하고 셈.

	[기타]
	char *strerror(int errornum); : 에러 메시지를 만들어 내는 것. 해당 하는 넘버의 에러 메시지를 리턴.
									ex) printf("%s\n", strerror(2)); -> 에러 메시지는 플랫폼마다 다를 수 있음
	
	
*/

//=====================================================================================================================================
// 10주차: C Formatted Input/Output

// scanf의 다양한 기능
// <stdio.h> 사용

// 1. Streams: sequences of bytes
/*

	- input operations: device에서 main memory로의 bytes flow
	- output operations: main memory에서 device로의 bytes flow

	- 프로그램 실행되면 standard input stream, standard output stream, standard error stream

*/


// 2. Formatting Output with printf: 출력을 원하는 형식으로 하는 것
/*
	- format control string: 어떠한 타입, 소수점 자리, 좌우 정렬과 같은 다양한 기능
		-> conversion specifiers, flags, field widths, precisions, literal characters

	- 가능한 기능
		: 원하는 자릿수만큼 반올림, 소수점을 기준으로 정렬, 좌우 정렬, 특정 위치에 문자 출력,
		  10e+3(=10*10^3)과 같은 exponential format, 8/16진수, 너비 고정
*/

// 3. Printing Integers
/*
	- d
	- hd: short타입 정수
	- i: d와 같은 기능. 다만 scanf에서는 사용이 조금 달라짐
	- o: unsigned 8진수
	- u: unsigned 정수
	- x or X: unsigned 16진수, x면 소문자로 a~f 출력, X면 대문자로 a~f 출력
	- h, l or ll: 각각 short, long, long long 타입 의미

	cf) printf("%ld\n", 200000000000L); -> L 제외 나머지 수 출력됨

*/

// 4. Printing Floating-Point Numbers
/*

	- e or E: exponential notation
	- f or F: 
	- g or G:
	- L: long double floating point value

	cf) 150.4582 = 1.504582 * 10^2 = 1.504582E+02

	- e, E, f를 쓰게 될 경우 디폴트로 6자리의 소수점 자리를 사용하게 됨. 바꾸고 싶으면 명시해줘야함.
	- f를 쓰게 될 경우 소수점 기준으로 왼쪽에 최소 한 자리의 숫자가 있어야 됨(한 자리 이상도 가능한 것)
	- 다만 e를 쓰게 될 경우 소수점 기준으로 왼쪽에 한 자리의 숫자'만' 있어야 함
	- g나 G를 사용할 경우 남은 소수점 자리에 0이 채워지지 않음
							exponent가 -4보다 작거나, 6이상일 때에는 e를 사용해 출력됨
							나머지의 상황은 f로 출력한 것과 같다.
							ex) 0.0000875는 8.75e-05로 출력됨. 8750000.0은 875e+06으로 출력됨.
							
							또한, 소수점 왼쪽까지 포함해서 몇 자리를 출력할거냐의 기준.(소수점은 포함 안됨._
							ex) 1234567.0은 1.2345'7'e+6으로 출력됨.

*/

// 5. Printing Strings and Characters
/*

	- String을 출력할 때에는 널문자 '\0'을 만날 때까지 출력하지만, 만약 널 문자가 없다면 zero byte가 될 때까지 출력

	- String 출력 3가지 방법
	1) 직접 스트링 리터럴 넣기
	printf("%s\n", "This is a string");

	2) char array 이용
	char string[] = "This is a string";
	printf("%s\n", string);

	3) char pointer 사용한 출력
	const char *stringPtr = "This is also a string";
	printf("%s\n", stringPtr);
	  
	- %c로 string을, 혹은 %s(character pointer를 기대함)로 character를 출력하려고 하면 error가 발생함

	- string을 ''로 감싸려고 하면 syntax error 발생

	- double quotes로 character constant를 만드려고 하면 string pointer가 만들어지긴 하는데,
	  이때에는 character 하나만 포함되는게 아니라 널문자 포함한 2개 문자가 들어감
	  
*/

// 6. Other Conversion Specifiers.
// %p - 포인터, %% - % 자체

// 7. Printing with Field Widths and Precision
// field width가 데이터보다 크면 데이터가 오른쪽 정렬됨
// field width는 모든 conversion specifiers에서 사용 가능
// 충분하지 않은 field width는 혼란을 야기함 -> 부족하더라도 넘쳐서 알아서 출력되므로 출력이 안되지는 않음
// - 마이너스 와 같은 기호도 한 자리를 차지함.

// 7. Specifying Precisions for Integers, Floating-Point Numbers and Strings
// precision이란 출력할 최소 숫자 개수. 여기에 맞춰 출력하기 위해 0이 채워지거나 공백이 추가될 수 있음
// e, E, f의 precision은 소수점을 기준으로 오른쪽에 6자리까지 출력한다는 것.
// g, G에서는 출력될 수 있는 최대 자리. (소수점 앞뒤 모두 포함)
// s의 precision은 string의 앞에서부터 시작해서 출력할 최대 개수를 의미
// 정수에 precision을 적용하면 정수의 앞에 0이 채워짐. 873 -> 0873

// 참고
// printf("%*.*f", 7, 2, 98.736);
// - field width = 7, precision = 2
// 결과: __98.74

// 8. Using Flags
// printf에서 사용 가능한 flag는 총 5가지 -> % 싸인의 바로 오른쪽에 사용하면 flag라고 인식될 수 있음.
// 형식지정자 안에서 여러개의 flag 사용 가능

/*

	-(minus sign): 왼쪽 정렬
	+ : 양수에 + 싸인 추가
	space : 양수 앞에 공백 추가
	# : 8진수 형식지정자 o 출력 앞에 0 넣어줌, 16진수에서는 앞에 0x나 0X 넣어줌.(이건 형식지정자 x가 대소문자인지에 따라 달라짐)
		형식지정자 g 앞에서 사용되면 decimal point 강제(1427 -> 1427.00)
	0: 비어있는 곳에 0을 채움

*/

// 9. Printing Literals and Escape Sequences
// 백슬래쉬로 적혀지는 Escape Sequences들
/*

	\' : '
	\" : "
	\? : ?
	\\ : \
	\a : 알림소리 낸다.
	\b : backspace
	\f : 
	\n
	\r : 해당 행의 첫 시작으로 커서가 돌아감
	\t
	\v : vertical tab

*/

// 10. Reading Formatted Inut with scanf
// scanf에서도 format control string 사용 가능
// 
// scanf(format-control-string, other-arguments);
// 
// scanf의 입력 형식 기능
// 1) 모든 타입의 데이터 입력
// 2) input stream으로 들어오는 특정한 캐릭터들을 입력하는 것
// 3) input stream으로 들어오는 특정한 캐릭터들을 무시하는 것

// 11. scanf Conversion Specifiers
/*
	[Integers]
	1) d: signed 정수
	2) i: signed 정수, 8진수(0 prefix 추가하여 입력), 16진수(0x prefix 추가하여 입력)
	3) o: 8진수로 받아들임
	4) u: unsigned 정수
	5) x or X: 16진수
	6) h, l, ll: short, long, or long long 정수

	[Floating-point numbers]
	7) e, E, f, g, G
	8) l or L
	
	[Characters and strings]
	9) c
	10) s

	[Miscellaneous]

	cf) 사용자에게 한 번 입력 받아 각각 %c와 %8s로 나눠서 저장 가능

*/

// 12. Using Scan Sets
// sequence of characters로 scan set 구성
// [] 사용. 매칭이 되면 문자열로 저장됨
// 매칭이 안되면 수정되지 않고, 안 넣어짐
/*


	char z[9];

	printf("%s", "Enter string: ");
	scanf("%8[aeiou]", z); -> [aeiou]는 vowels

	printf("The input was \"%s\"\n", z);

	==> 결과
		Enter string: ooeeooahah
		The input was "ooeeooa"


*/


// inverted scan set -> ^를 넣으면 search for nonvowels
/*


	char z[9];

	printf("%s", "Enter string: ");
	scanf("%8[^aeiou]", z);

	printf("The input was \"%s\"\n", z);

	==> 결과
		Enter string: String
		The input was "Str"


*/

// 13. Using Field widths with scanf
// : 특정 정수 자리수만 받는데 사용할 수 있음. ex) 123456 입력시 -> %2d%d를 통해 12와 3456으로 분리해 받기 가능

// 14. Skipping Characters
// ex) scanf("%d-%d-%d", &month, &day, &year);  =>  대쉬 자체 무시 가능
// ex) scanf("%d%*c%d%*c%d", &month, &day, &year);  => 어떤 문자도 무시 가능. 11/18/2012 입력시 /가 무시됨

//=====================================================================================================================================
// 11주차: C Formatted Input/Output
// - C File Processing
// - C Structures

// 1. Files and Streams
// C에서 파일을 인식하는 방법은 byte의 순차적인 흐름이다.
// 각각의 파일들은 EOF marker를 가지고 있거나 입력 가능한 최대 byte가 정해져 있음 = 우리에게는 가려져 있음. 직접 볼 수 없음.
// 0~n-1까지 데이터, n에는 EOF

// 2. Standard Streams in Every Program
// 프로그래밍과 파일 처리 맥락에서의 stream은 sequence of data elements를 의미함. (파일, 네트워크 연결, 메모리 ... 등)
// 파일이 실행되면 다음 3개의 스트림이 실행됨. standard input, standard output, standard error
// 
// 1) Communication Channels로서의 Stream: 파일과 프로그램의 소통을 가능하게 함
//											standard input이 키보드로부터 데이터를 읽어오거나
//											standard ouput이 화면에 데이터를 출력하게 함
// 
// 2) FILE Structure: 파일을 열게되면 FILE structure(<stdio.h>)의 포인터를 return하게 됨. stdin, stdout, stderr로 코드상에서 사용
// 
// 3) File-Processing Function - fgetc
// : getchar와 같음. 파일로부터 하나의 character를 읽어옴. 인수로 FILE pointer를 받음.
//	 fgetc(stdin)은 getchar() 호출과 기능이 같음
//
// 4) File-Processing Function fputc
// : putchar와 같음. 파일에 하나의 character를 적음. 인수로 파일에 적힐 character와 해당 문자가 적힐 파일의 포인터를 받음.
//   fputc('a', stdout)은 putchar('a') 호출과 기능이 같음
// 
// 5) Other File-Processing Functions
// : fgets와 fputs은 각각 파일에서 한 줄을 읽고, 한 줄을 쓰는 기능을 담당함

// 3. Creating a Sequential-Access File = 순차접근파일
// ex) 은행계좌 시스템: 계좌번호, 이름, 잔고 => 각 클라이언트의 record를 구성
//                      => 계좌번호가 record key로서 사용되며 이것의 순서를 기준으로 파일이 만들어지고 유지될 것
// 파일이 잘 열렸을 때. 만약 파일이 없으면 만들고 그게 열림.
// 만약 같은 경로에 같은 이름의 파일이 있다면 경고 없이 그 파일안에 모든 것이 없어지고 새로 쓰이는 것
// eof가 들어오면 nonzero 리턴, 아니면 0 리턴.
/*

	fprintf함수는 파일 포인터와 쓰일 데이터를 받아서 파일에 데이터를 적는다.
	만약 첫 번째 인수에 파일 포인터 대신 stdout을 적는다면, prinf와 동일한 효과가 있음
	ex) fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);

*/
// 모든 입력이 종료되고 연결되어있는 파일을 끊는 과정을 housekeeping이라고 함.

// 4. File Open Modes
/*

	r : reading
	w : writing, 있는 데이터들은 날라가고 새로 덮어씌워짐
	a : append, 데이터가 지워지지 않음

	r+ : update(reading and writing)하기 위해 파일 open
	w+ : reading and writing하기 위해 파일 create. 만약 이미 파일이 있다면 그 파일의 모든 데이터들은 날아가고 열림
	a+ : reading and updating하기 위해 파일이 open되거나 create됨. eof를 만나면 모든 writing이 멈춤. append 데이터 됨.

	rb : binary mode로 존재하는 file을 reading하기 위해 open
	wb : binary mode로 작성하기 위해 파일ㅇ르 create. 만약 이미 있다면 그 파일의 모든 데이터들은 날아가고 열림
	ab : binary mode로 eof가 들어올 때까지 작성하기 위해 파일을 open하거나 create. (append)

	rb+ : binary mode로 update(reading and writing)하기 위해 파일 open
	wb+ : binary mode로 update하기 위해 파일 create. 만약 이미 있다면 그 파일의 모든 데이터들은 날아가고 열림
	ab+ : binary mode로 update하기 위해 파일을 open하거나 create함.

*/

// 5. Random-Access Files
// record가 모두 같은 길이일 필요는 없지만, 랜덤접근파일에서는 record가 고정된 길이라고 가정함
// 사용되는 곳: 항공예약 시스템, banking systems, point-of-sale systems, transaction-processing systems that require rapid access
// 빠른 접근이 필요할 때 랜덤접근파일 사용
// 
//	1) Creating a Random-Access File
// 
//		- fwrite 함수
//		: 파일의 특정 위치에다가 특정 바이트 수 만큼을 전달. 배열 쓰기 가능
//			fseek함수와 같이 사용하면, 파일의 특정 위치에 데이터 쓰기 가능
//		ex) fwrite(&number, sizeof(int), 1, fPtr);   =>  number 변수에서 4바이트만큼을 읽어 fPtr이 가르키는 파일에 쓰는 것
//														여기서 1은 number of elements in the array를 의미
// 
//		- fread	함수
//		: 파일의 특정 위치의 특정 바이트 수 만큼을 읽을 수 있음. 배열 읽기 가능
//		ex) fread(&client, sizeof(struct clientData), 1, cfPtr); => 하나 읽는다는 의미의 1, 하나 이상 읽고 싶으면 읽고 싶은 요소 수를 적으면 됨.
// 
//	
//		- int fseek(FILE *stream, long int offset, int whence);
//				File structure, 얼만큼 이동하는 지에 대한 바이트 수, seek이 시작되는 위치를 가르킴
//				
//				세번째 인수(positive offset은 forward, negative offset은 backward)
//				SEEK_SET : 파일의 처음부터 시작. 파일의 처음부터 offset만큼 이동하겠다. positive offse
// 				SEEK_CUR : 파일의 현재부터 시작. 파일의 현재부터 offset만큼 이동하겠다. p/n 선택
//				SEEK_SET : 파일의 끝부터 시작. 파일의 마지막부터 offset만큼 이동하겠다. negative offset
// 
//		* cfPtr이 가르키는 파일 포지션 포인터가 바이트 넘버 5를 가지고 있으면 인덱스 5라는 위치에 접근

// 6. Structure
// 배열과의 차이점: 서로 다른 데이터 타입도 묶을 수 있음
// typedefs: 별명을 만들어주는 것


// 1) 정의
/*
	
	* structure definitions : 이것만 가지고는 메모리 상 공간을 배정받지 못함. 선언해야함. do not reserve any space in memory
	struct card {		=> 여기서 card는 structure tag를 의미
		char *face;		=> 중괄호 안에 있는 것들은 structure's members라고 함
		char *suit;
	};
	
	* 두개의 서로 다른 구조체 안에서는 같은 이름이 있어도 상관없음
	* structure 정의는 세미콜론으로 끝나야 함
	
	-----------------------------------------------

	* self-referential structures : 같은 structure 타입을 멤버로 가지는 것
	struct employee2 {
		char firstName[20];
		char lastName[20];
		unsigned int age;
		char gender;
		double hourlySalary;
		struct employee2 teamLeader;	=>	ERROR
		struct employee2 *teamLeader;	=>	가능(포인터는 가능함)

*/

// 2) 선언
/*

	struct card aCard, deck[52], *cardPtr;	=> 이미 정의된 뒤, 선언 이렇게 따로. struct card까지가 type인 것.

	struct card {
		char *face;
		char *suit;
	} aCard, deck[52], *cardPtr;  =>  comma-separated list를 사용해 선언 가능. 정의와 선언 동시에.

*/

// 3) 초기화
/*

	initializer lists 사용.
	struct card aCard = { "Three", "Hearts" };

	만약 구조체의 멤버보다 적은 수로 초기화 한다면 남은 부분은 0으로 초기화되고 포인터 형태의 멤버는 NULL로 초기화됨.

	같은 타입인 다른 구조체로 초기화 가능. struct card aCard를 struct card bCard로 초기화 가능. bCard의 일부만 가져올 수도 있음.

*/

// 4) Operators
/*

	structure member operator(.) = dot operator
	structure pointer operator(->) = arrow operator

	struct card aCard;
	struct card *cardPtr = &aCard;
	printf("%s", cardPtr->suit); 와 printf("%s", aCard.suit); 와 printf("%s", (*cardPtr).suit ); 는 같은 결과가 나옴
	
	
*/

// 5) Using Structures with Functions
/*

	Structure may be passed to functions by
	- individual structure members
	- an entire structure
	- a pointer to a structre

	함수에 passing할 때에는 모두 passed by value로 전달됨. 값수정 불가능
	pass the address를 통해 by reference. 

*/

// 6) typedef : 새로운 타입을 만드는 것은 아니다.
/*

	typedef struct card Card;

	* sturcture definition때 typedef를 사용하면, structure tag가 필요하지 않게됨
	typedef struct {
		char *face;
		char *suit;
	} Card;

	=> 선언할 때에는 struct card deck[52]; 말고  Card deck[52]; 만 쓰면 됨

*/

//=====================================================================================================================================
// 12주차: Introducing Object Technology 
// 
// 1. C++
// - 객체지향 프로그래밍(OOP)
// - 소프트웨어의 생산성과 재사용성을 높임 -> 업무의 효율성 높임 (C와의 차이점)
// - Bjarne Stroustrup이라는 Bell 연구소에 있는 분이 만듦
// - 주석 표기는 C언어와 같음
// - <stdio.h>와 유사한 파일 <iostream>
// 
// - 빈괄호는 void와 같은 역할. C에서는 빈 괄호를 권장하지 않음. runtime errors를 발생시킬 수 있기 때문
// 
// - std::cout의 의미: standard output stream object
// - 기호 << 의 의미: stream insertion operator
// - std::cout이 "Entre first integer: "라는 string을 받은 것.
// 
// - std::cin의 의미: standard input stream object
// - 기호 >> 의 의미: stream extraction operator
// 
// - std::endl의 의미: stream manipulator
// - outputs a newline, buffer 비운다.
// 
// - std:: 반복
// - namespaces 안에 cout, cin, endl 등이 있다.
// - using을 통해 반복 사용 피한다. (namespace std를 사용할 거다를 알려줌)
// 
// - concatenated stream output: 여러개의 서로 다른 타입의 값들을 한 번에 출력할 수 있게 함.
//								기호 <<가 어떻게 출력할지 알고 있다.
// 
// - C++에는 메인함수에서 return이 필요하지 않다.(필수가 아님)
// 
// - .h로 끝나는 헤더파일은 "old-style" header file임.
//		다만 사용자가 정의한 헤더파일은 #include로 호출할 수 있어도 .h를 적어줘야함
//
// - Inline Functions
//	* 함수를 사용하느라 왔다갔다 하는 과정들이 execution-time overhead를 유발할 수 있음
//	* inline function은 function call overhead를 줄이는 데 도움이 됨. 특히 작은 함수에서.
//	* inline은 qualifier로서 사용됨. 함수의 리턴 타입 앞에 써주면 이 함수 코드의 카피를 만들어서 바로 그 자리에서 복사본을 실행하게 함
//  * small function이 아닌데 inline을 사용하면 오히려 프로그램을 크게 만들 수 있다.
//	* 이러한 경우네는 컴파일러가 inline 퀄리파이어를 자동 무시하기도 함
//	* C++은 bool 타입 제공. boolean values(true/false) => 참은 1 이나 0이 아닌 값, 거짓은 0 이나 null pointer
// 
// - Reference Parameters(performing pass-by-reference)
//		* 함수의 프로토타입이나 정의를 보지 않고는 이 함수가 pass-by-value인지, pass-by-reference인지 알 수 없음
//		* type-safe linkage: 컴파일러는 타입들이 잘 맞춰져서 불려지고 있는지를 검사함. 안 맞으면 error 리턴
// 
// - References as Aliases within a Function
/*

	int count = 1;		=> 변수 선언
	int &cRef = count;	=> cRef는 count의 alias임.
						   reference variable은 선언과 동시에 초기화가 되어야 함
						   다른 variable의 alias를 다시 reassigned할 수 없다.
	cRef+;	=> count 증가(cRef를 알리아스로서 사용)

	* 함수로부터 references를 return하는 것은 위험하다.
	* 함수 안에서 reference variable을 declared한 경우, static이어야 한다.
	* 만약 그렇지 않으면, 함수가 종료되자마자 변수가 사라지게 되므로 변수가 undefined되고, 프로그램이 unpredictable해진다.
	* 이러한 undefined references variables을 dangling references라고 부름

*/
//
// - Default Arguments: 기본값을 가지고 있는 인수들
//	* 가장 오른쪽에 위치해야하는 인수(rightmost)
//	* function prototype이나 header에서 명시되어야 함
//	* 전달되지 않은 값들은 default값으로 사용된다.
// 
// 
// - Unary Scope Resolution Operator(::) : 전역변수와 지역변수의 이름이 같을 때 구분해주는 역할
//	* 블록 밖에서는 사용될 수 없다. ::은 같은 이름의 지역변수가 같은 scope에 있을 때 전역변수에 접근할 수 있게 한다.
/*

	int number = 7;  => 전역변수

	int main()
	{
		double number = 10.5;  => 지역변수

		cout << "Local double value of number = " << number
			<< "\nGlobal int value of number = " << ::number << endl;  => ::number 사용!
	}

*/

// - function Overloading(함수의 재사용) : 같은 이름의 함수지만 인수들의 타입이 다른 경우.
//	* 컴파일러가 알아서 선택해 사용
// 
// - function Templates
// * single function template만 정의해두면 많은 overloaded functions를 사용할 수 있음
// * template 키워드 필요. angle brackets(<>)를 사용해서 정의.
// * header 파일 작성시 사용되는 것. 나중에 이 헤더파일을 include 해줘야함.
// 
// - OOD(Object-Oriented Design) and Inheritance
//	* 공통점 관리(have much in common)
//	* 상속(inheritance relationships) : 어떤 특정 클래스를 상속 받은 후, 부모 클래스에 없는 속성을 자식 클래스에 추가할 수도 있음
//  * 객체 사이의 communication 모델
//	* 캡슐화(Encapsulation -> information hiding) : 밖에서는 안보임. 자동차는 운전은 할 수 있지만 내부적 구조가 보이진 않음. 밖에서 접근/수정하지 못하게 함(프로그램 오류 방지)
//
// - 반면에 C는 절차지향언어로서, action oriented하다. function unit
// - C++은 객체지향 언어. object-oriented programming이다. class unit
//		함수들은 클래스 안에 정의되어 있음.
// - 다른 사용자들이 정의한 built-in types도 사용가능하고,
//	자신이 새로 정의할 수도 있다. 
// 
// - 클래스 안의 데이터 요소들을 data members라고 함.
// - 클래스 안에 함수 요소들을 member functions라고 함.
// - 클래스 들은 청사진으로서 사용될 수 있음(blueprint)
// - 서로 다른 클래스 간의 관계성을 associations라고 함

//=====================================================================================================================================
// 13주차: Introduction to Classes, Objects and Strings

// - set 함수들은 mutators라고도 불림
// - get 함수들은 accessors라고도 불림

// Constructors(생성자)
/*

	- constructor는 special member function으로,
	  클래스와 같은 이름이어야 함
	- 생성자는 return하지 않고, void로도 표현하지 않는다.
	- 생성자는 보통 public으로 선언된다.
	- 오버로딩을 통해서 여러 개의 생성자 사용 가능

*/

// Separating Interface from Implementation
/*

	Interface: 이 클래스가 어떻게 구성되어있는가, 어떻게 사용할 수 있는가, 상호작용을 나타냄
				생성자와 member functions들이 있을 수 있음

	implementation: Interface 그 이상의 구현 내용들은 implementation에 들어감

	Interface와 implementation은 모두 클래스 이름과 동일해야함

	class name :: function   =>   scope resolution operator ( 꼭 있어야 함 )


*/


//=====================================================================================================================================
// 14주차: Introduction to Classes, Objects and Strings
// - Classes: A Deeper Look; Throwing Exceptions
//  -Object-Oriented Programming : Inheritance

/*

	include guard in headers : 코드 중복을 막음

	#ifndef TIME_H	=> if not defined
	#define TIME_H	=> 그렇다면 이 헤더파일 include
	...소스코드 작성...
	#endif	=> close 역할
*/

// Destructor(소멸자) -> special member function
/*

	- tilde character(~) 사용
	- 생성자에 반대되는 개념
	- 암묵적으로 호출되는 것. 객체가 사라지면 destructor가 호출됨
	- termination housekeeping: 제대로 종료됨을 알려주는 역할
	- 우리한테 보여주지 않고 내부적으로 호출됨
	- 2번 4번 순서로 생성자가 호출되었다면 소멸자는 4번 2번 순서로 호출됨
	- 소멸자 호출 순서는 지역 - static - 글로벌

	1. Global Scope에 대한 생성자와 소멸자
	1) 프로그램이 시작되었을 때 생성자 호출됨
	2) main 함수 종료되면 소멸자 호출됨
		* functinon exit: 프로그램 즉시 종료.
		* function abort: 프로그램 즉시 종료. 어떤 객체의 소멸자도 호출하지 않고 종료함
	
	2. Local Objects에 대한 생성자와 소멸자
	1) Local Object가 만들어질때에 생성자가 호출됨
	2) object의 scope을 벗어날 때 소멸자가 호출됨
		* exit나 abort 함수가 호출되면 지역 객체에 대한 소멸자는 호출되지 않음.

	3. static Local Object에 대한 생성자와 소멸자
	1) 정의되는 순간에 생성자가 호출됨. 이때 딱 한 번만 생성자가 호출됨.
	2) main 함수가 종료되거나 exit 함수가 호출되면 소멸자가 호출됨

*/

// Introduction(상속)
/*

	base class, super class(부모 클래스) - general, larger
	derived class, sub class(자식 클래스) - specific, subset

	public, protected, private 상속

	- 여기서 public 상속
	: 자식 클래스의 모든 객체가 부모 클래스의 객체가 된다.

*/

// Class Hierarchy( = is-a relationship. 자식 클래스 is a 부모 클래스)
// : 상속의 관계를 가지게 된다면 관계성 있는 클래스

// 직접적 자식이 아닌 클래스들에겐 indirect base class
// 직접적 자식인 클래스들에겐 direct base class

// 자식 클래스에서 함수를 통해 부모 클래스의 private members를 수정할 수 있음

/*

	single inheritance: 부모 클래스 1개
	multiple inheritance: 부모 클래스 2개 이상 - 권장되는 상속은 아님

	ex) class TwodimensionalShape : public Shape  =>  Shape 클래스를 public 상속

	protected 상속: 상속된 클래스에서는 직접적으로 접근 가능

*/


