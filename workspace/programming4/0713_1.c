#include <stdio.h>

void main() {
	/*정수 세 개를 입력 받아
	소수점 아래 두 자리까지 평균을 출력하기*/

	int num1, num2, num3;
	int sum;
	double avg;

	printf("세 정수의 평균을 구하는 프로그램입니다.\n");
	printf("첫 번째 정수를 입력해주세요>");
	scanf_s("%d", &num1);

	printf("두 번째 정수를 입력해주세요>");
	scanf_s("%d", &num2);

	printf("세 번째 정수를 입력해주세요>");
	scanf_s("%d", &num3);

	sum = num1 + num2 + num3;
	avg = (double)sum / 3;

	printf("입력하신 세 정수의 평균은 %.2lf입니다.", avg);
}