#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 문자열을 저장하는 char형 배열
int main(void)
{
	// 문자 상수로 하나씩 초기화
	// char str[80] =  {'a', 'p', 'p', 'l', 'e', 'j', 'a', 'm'};

	// 문자열 상수로 한 번에 초기화
	char str[80] = "applejam";

	printf("최초 문자열 : %s\n", str);
	printf("문자열 입력 : ");
	scanf("%s", str);
	printf("입력 후 문자열 : %s\n", str);

	// 널문자: char형 배열에 저장된 0.
	// 문자열을 저장하는 char형 배열에서, 남는 배열 요소에는 자동으로 0이 채워짐. 아스키코드 0인 것.


	return 0;
}