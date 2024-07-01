#include <stdio.h>
#include <string.h>

// 문자열 전용 입출력 함수 : gets, puts

// scanf 함수는 char형 배열에 문자열을 입력할 수 있으나, 띄어쓰기가 있는 경우 그 전까지만 입력됨
// 띄어쓰기까지 포함해서 문자열을 입력할 수 있는 gets 함수 !

// gets 함수: 빈칸을 포함해 한 줄 전체를 문자열로 입력
// puts 함수: gets와 짝을 이뤄 문자열을 출력하는 함수

int main(void)
{
	char str[80];

	printf("문자열 입력 : ");
	gets(str); // Enter 키를 누르기 전까지 전체를 하나의 문자열로 배열에 젖아함

	puts("입력된 문자열 : ");
	puts(str);


	return 0;
}