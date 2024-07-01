#include <stdio.h>

void main() {
	/*
	정수를 입력 받아서 해당 정수의 십의 자리와 일의 자리 출력하기

	입력 예시: 10

	출력 예시
		십의 자리: 1
		일의 자리: 0

	*/

	printf("입력한 정수의 십의 자리와 일의 자리를 출력하는 프로그램입니다.\n");
	printf("정수를 입력해주세요>\n");

	int num;
	scanf_s("%d", &num);

	/*printf("입력한 정수: %d", num);*/

	int smallNum = num % 10;
	int bigNum = num / 10;

	printf("십의 자리: %1d\n", bigNum);
	printf("일의 자리: %d\n", smallNum);



	printf("-----------------------------------------------------------\n");

	printf("노래 한 곡당 300원인 코인 노래방에서 부를 수 있는 노래 수와 잔돈\n");

	int price = 300;

	int won;
	scanf_s("%d", &won);

	int song, temp;

	song = won / price;
	temp = won - (song * price);

	printf("부를 수 있는 노래 수: %d곡\n", song);
	printf("잔돈: %d원\n", temp);

	printf("-----------------------------------------------------------\n");

	printf("사용자에게 영어 소문자를 입력받아서 해당 소문자를 대문자로 바꾸어 출력하기\n");

	char small;
	scanf_s(" %c", &small);
	// 그 전에 Enter를 친 적이 있다면 Enter 값이 같이 들어가게 되므로 앞에 띄어쓰기 필수

	char big;
	big = small - 32;

	printf("입력하신 소문자: %c\n", small);
	printf("바뀐 대문자: %c", big);
}