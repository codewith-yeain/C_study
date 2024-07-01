#include <stdio.h>

int main(void)
{
	int income = 0;					// 소득액 초기화
	double tax;						// 세금
	const double tax_rate = 0.12;	// 세율 초기화

	income = 456;
	tax = income * tax_rate;
	printf("세금은 : %.1lf입니다.\n", tax);


	//------------------------
	/*int income에서, int는 예약어이고 age는 식별자이다.*/

	// 식별자 규칙
	// 1. 알파벳 대문자, 소문자, 숫자 0~9, 그리고 "밑줄"로 만든다.
	// 2. 숫자로 시작할 수 없다.
	// 3. 대문자와 소문자는 서로다른 식별자로 인식한다.
	// 4. 예약어는 식별자로 사용할 수 없다.

	return 0;
}