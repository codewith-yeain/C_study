#include <stdio.h>

void main() {
	
	// 조건식 : 값이 0 아니면 1만 있는 식

	printf("\n--------------관계 연산자--------------\n");
	int num1 = 20, num2 = 30;

	printf("num1 > num2: %d\n", num1 > num2);
	printf("num1 < num2: %d\n", num1 < num2);
	printf("num1 >= num2: %d\n", num1 >= num2);
	printf("num1 <= num2: %d\n", num1 <= num2);
	printf("num1 == num2: %d\n", num1 == num2);
	printf("num1 != num2: %d\n", num1 != num2);

	printf("\n--------------논리 연산자--------------\n");
	int num3 = 10;

	printf("%d\n", num3 > 0 && num3 != 5);
	printf("%d\n", 10 && -5);
	printf("%d\n", 10 && 0);
	printf("%d\n", !10);
	printf("%d\n", !0);

	printf("\n--------------삼항 연산자--------------\n");
	// 조건식 ? 참일때 값: 거짓일 때 값;
	// 참일때 나올 값과 거짓일때 나올 값의 자료형은 통일되어 있어야 한다.

	printf("%d\n", -5 ? 10 : 20);

	int result = -5 ? 10 : 20;
	printf("%d\n", result);

	// 문자열의 형식지정자는 %s
	printf("%s", "정수");
}