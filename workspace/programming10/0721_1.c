#include <stdio.h>


// 함수의 선언과 정의를 동시에 진행
// 매개변수와 리턴이 둘 다 있는 함수의 정의
// 리턴이 있을 경우, 리턴값의 타입을 가장 앞에 적어준다.
int add(int a, int b) {
	return a + b;
}

// void는 리턴 타입이 없을 때 사용한다.
void printName(int cnt, char* name);

// [실습]
// 사용자에게 정수를 입력 받아서 해당 정수가
// 짝수인지 홀수인지 판별하는 함수
// 리턴은 짝수이면 1 리턴, 홀수이면 0리턴
// 메인함수에서 테스트까지 진행해주세요!

int isEven(int num) {
	int result = num % 2 == 0;
	return result;
}

int main() {
	// 매개변수가 2개 있는 형태로 정의를 해 놓았기 때문에
	// 매개변수를 넘겨주지 않으면 오류가 발생한다.
	// add();

	// 리턴이 있으면 함수 사용 부분 전체를 리턴 값으로 봐야한다 !!!!!
	int result = add(5, 1);
	printf("함수의 실행 결과: %d\n", result);

	result = add(10, 2);
	printf("함수의 실행 결과: %d\n", result);

	printName(5, "류호근");


	result = isEven(5);
	printf("isEven(5)의 실행 결과: %d\n", result);

	result = isEven(8);
	printf("isEven(8)의 실행 결과: %d\n", result);

	return 1;
}

void printName(int cnt, char* name) {
	for (int i = 0; i < cnt; i++) {
		printf("%s\n", name);
	}
}