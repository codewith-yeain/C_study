#define _CRT_SECURE_NO_WARNINGS //옛날 문법 사용 주의 표시 무시
#include <stdio.h>

void main() {

	/*int num;
	printf("num의 주소 값은 %p", &num);*/

	/*int num1;
	int num2;

	scanf_s("%d", &num1);
	scanf_s("%d", &num2);

	printf("num1에 들어가 있는 값: %d\n", num1);
	printf("num2에 들어가 있는 값: %d\n", num2);*/


	printf("----------------------------------------------------\n");
	// 날짜를 입력 받아 출력하는 프로그램

	int month, day;

	printf("오늘은 몇 월인가요?\n");
	scanf_s("%d", &month);

	printf("오늘은 몇 일인가요?\n");
	scanf_s("%d", &day);

	printf("오늘은 %d월 %d일입니다.\n", month, day);

}