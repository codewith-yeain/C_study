#include <stdio.h>


// 상자에 10개의 라면이 들어간다.
// 라면의 갯수를 입력 받아서, 몇 개의 상자가 필요한지 출력

// 입력 예시: 15
// 출력 예시: 2상자가 필요합니다.

// 입력 예시: 20
// 출력 예시: 2상자가 필요합니다.
void main() {

	int box; // 필요한 상자의 갯수
	int ramen; // 상자에 넣을 라면의 갯수
	int temp = 10;
	int isTrue;
	
	printf("라면을 넣을 때 필요한 상자의 수를 알려주는 프로그램입니다.");
	printf("상자에 넣어야 할 라면의 총 갯수를 입력해주세요>");
	
	scanf_s("%d", &ramen);

	isTrue = ramen % temp == 0;
	box = isTrue ? ramen / temp : ramen / temp + 1;
	printf("%d상자가 필요합니다.", box);




	printf("\n------------------------------------------------------\n");
	// 두 정수를 입력 받아서 두 수의 차(큰 수 - 작은 수)를 구하기

	int num1, num2, result;
	int isNum1Bigger;

	printf("입력하신 두 정수 중 더 큰 숫자를 기준으로 두 수의 차를 구하는 프로그램입니다.\n");
	printf("두 정수를 엔터를 기준으로 입력해 주세요.\n");

	scanf_s("%d%d", &num1, &num2);

	isNum1Bigger = num1 > num2;

	result = isNum1Bigger ? num1 - num2 : num2 - num1;
	printf("결과: %d", result);


	printf("\n------------------------------------------------------\n");
	// 참고
	// number1 이 더 크면 1
	// number2 가 더 크면 2
	// 두 수가 같으면 0 출력

	int number1, number2, result;

	scanf_s("%d%d", &number1, &number2);

	result = number1 > number2 ? 1 : number1 < number2 ? 2 : 0;

	printf("결과: %d", result);


}