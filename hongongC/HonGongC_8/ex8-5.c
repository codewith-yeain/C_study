#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 문자열을 대입하는 strcpy함수
// strcpy(여기에 저장, 여기서 복사);

int main(void)
{
	char str1[80] = "cat";
	char str2[80];

	// 문자열 상수를 char형 배열에 대입
	strcpy(str1, "tiger");	// str1 배열에 "tiger" 복사

	// char형 배열에 저장된 문자열을 다른 char형 배열에 대입
	strcpy(str2, str1);		// str2 배열에 str1 배열의 문자열을 복사

	printf("%s, %s\n", str1, str2);
	
	return 0;
}