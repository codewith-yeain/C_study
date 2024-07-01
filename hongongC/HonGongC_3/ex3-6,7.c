#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char fruit[20] = "strawberry";

	printf("딸기 : %s\n", fruit);
	printf("딸기잼 : %s %s\n", fruit, "jam"); // 문자열 상수를 직접 %s로 출력

	// 주의: 배열에는 대입 연산자 사용 불가능
	// fruit = "banana"; -> 배열은 선언된 이후에 대입 연산자로 문자열을 입력할 수 없다.

	printf("전 : %s\n", fruit);
	strcpy(fruit, "banana");
	printf("후 : %s\n", fruit);

	return 0;

}