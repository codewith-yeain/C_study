#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(const char* const sPtr);

int main(void)
{
	printf("\n------------------- strtod ------------------\n\n");
	const char* string1 = "51.2% are admitted"; // 문자열 초기화
	char* stringPtr; // 문자 포인터

	double d = strtod(string1, &stringPtr); // stringPtr에는 변환되고 난 나머지 부분의 첫 번째 문자에 대한 위치 정보가 들어가게 됨

	printf("The string \"%s\" is converted to the \n", string1);
	printf("double value %.2f and the string \"%s\"\n", d, stringPtr);

	printf("\n---------------------------------------------\n\n");

	printf("\n------------------- strtol ------------------\n\n");
	const char* string2 = "-1234567abc";
	char* remainderPtr;

	long x = strtol(string2, &remainderPtr, 0);

	printf("%s\"%s\"\n%s%ld\n%s\"%s\"\n%s%ld\n",
		"The original string is ", string2,
		"The converted value is ", x,
		"The remainder of the original string is ",
		remainderPtr,
		"The converted value plus 567 is ", x + 567);

	printf("\n---------------------------------------------\n\n");

	printf("\n------------------- strtoul ------------------\n\n");
	const char* string3 = "1234567abc";
	char* remainderPtr2;

	unsigned long int x2 = strtoul(string3, &remainderPtr2, 0);

	printf("%s\"%s\"\n%s%ld\n%s\"%s\"\n%s%ld\n",
		"The original string is ", string3,
		"The converted value is ", x2,
		"The remainder of the original string is ",
		remainderPtr2,
		"The converted value minus 567 is ", x2 - 567);

	printf("\n---------------------------------------------\n\n");

	printf("\n--------------- fgets와 putchar --------------\n\n");

	char sentence[80];

	puts("Enter a line of text: ");

	fgets(sentence, 80, stdin);

	printf("\n%s", "The line printed backward is: ");
	reverse(sentence);

	printf("\n---------------------------------------------\n\n");

	printf("\n------------------ getchar -----------------\n\n");

	int c;
	char sentence2[80];
	int i = 0;

	puts("Enter a line of text: ");

	while ((i < 80 - 1) && (c = getchar()) != '\n') { // 최대 문자 개수에 도달하거나 사용자가 엔터를 칠 때까지 계속 입력을 기다림
		sentence2[i++] = c;
	}

	sentence2[i] = '\0';

	puts("\nThe line entered was: ");
	puts(sentence2);

	printf("\n---------------------------------------------\n\n");

	printf("\n------------------ strcspn -----------------\n\n");

	const char* string4 = "The value is 3.14159a"; // a 무시됨 확인하기
	const char* string5 = "1234567890";

	printf("%s%s\n%s%s\n\n%s\n%s%Z\n",
		"string4 = ", string4, "string5 = ", string5,
		"The length of the initial segment of string4",
		"containing no characters from string5 = ",
		strcspn(string4, string5));

	printf("\n---------------------------------------------\n\n");

	printf("\n------------------ strspn -----------------\n\n");

	const char* string6 = "The value is 3.14159a"; // a 무시됨 확인하기
	const char* string7 = "aehi lsTuv";

	printf("%s%s\n%s%s\n\n%s\n%s%Z\n",
		"string6 = ", string6, "string7 = ", string7,
		"The length of the initial segment of string6",
		"containing only characters from string7 = ",
		strspn(string6, string7));

	printf("\n---------------------------------------------\n\n");

	printf("\n------------------ strtok -----------------\n\n");

	char string8[] = "This is a sentence with 7 tokens";

	printf("%s\n%s\n\n%s\n",
		"The string to be tokenized is:", string8,
		"The tokens are:");

	char* tokenPtr = strtok(string8, " "); // tokenPtr에 첫 번째 토큰에 대한 것이 assign됨

	while (tokenPtr != NULL) {
		printf("%s\n", tokenPtr);
		tokenPtr = strtok(NULL, " "); // get next token. 저장되어 있는 위치에서 토크나이징 시작하는 것. i부터 이어서 시작.
	}

	printf("\n---------------------------------------------\n\n");

	printf("\n------------------ memmove -----------------\n\n");

	char x3[] = "Home Sweet Home";

	printf("%s%s\n", "The string in array x before memmove is: ", x3);
	printf("%s%s\n", "The string in array x after memmove is: ",
		(char *) memmove(x3, &x3[5], 10));

	printf("\n---------------------------------------------\n\n");

	printf("\n------------------ memchr -----------------\n\n");

	const char* s4 = "This is a string";

	printf("%s\'%c\'%s\"%s\"\n",
		"The remainder of s after character ", 'r',
		" is found is ", (char *) memchar(s4, 'r', 16));
	
	// 결과: The remainder of s after character 'r' is found is "ring"

	printf("\n---------------------------------------------\n\n");

	printf("\n------------------ memset -----------------\n\n");

	char string9[15] = "BBBBBBBBBBBBBB";

	printf("string9 = %s\n", string1);
	printf("string9 after memset = %s\n",
		(char*)memset(string1, 'b', 7));

	printf("\n---------------------------------------------\n\n");


	return 0;

}

void reverse(const char* const sPtr)
{
	if ('\0' == sPtr[0]) {
		return;
	}
	else {
		reverse(&sPtr[1]);
		putchar(sPtr[0]);
	}
}