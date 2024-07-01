#include <stdio.h>

void main() {
	/*printf("if문 위의 문장----------------\n");

	if (0) {
		printf("if문 안의 문장1\n");
		printf("if문 안의 문장2\n");
	}

	printf("if문 아래 문장----------------\n");*/


	//-----------------------------------------------------------------------
	
	// 단순히 if 만 사용한 예제!
	
	//// 정수 하나를 입력받아서
	//int num;
	//printf("정수 하나 입력 >>");
	//scanf_s("%d", &num);

	//// 짝수일 경우에는 짝수입니다.
	//if (num % 2 == 0) {
	//	printf("짝수입니다!\n");
	//}

	//// 홀수일 경우에는 홀수입니다.
	//if (num % 2 != 0) {
	//	printf("홀수입니다!\n");
	//}
	//// 출력해보기


	//-----------------------------------------------------------------------

	// 정수를 하나 입력 받아서 0인지, 짝수인지, 홀수인지 검사하는 프로그램
	//int data;
	//printf("정수를 하나 입력해주세요. >>");
	//scanf_s("%d", &data);

	//if (data == 0) {
	//	printf("0을 입력하셨습니다.");
	//}
	//else if (data % 2 == 0) {
	//	printf("짝수를 입력하셨습니다.");
	//}
	//else {
	//	printf("홀수를 입력하셨습니다.");
	//}

	//-----------------------------------------------------------------------
	
	// 정수 하나를 입력 받아서
	// 3의 배수인지 4의 배수인지 검사하는 프로그램을 짜보자.
	// 둘 다 아니라면 3의 배수, 4의 배수가 아닙니다! 를 출력하기

	/*int digit;
	int isMultipleOf3, isMultipleOf4, isMultipleOf12;
	printf("3의 배수인지 4의 배수인지 검사해주는 프로그램입니다.\n");
	printf("검사할 정수 하나를 입력해주세요. >>");
	scanf_s("%d", &digit);

	isMultipleOf3 = digit % 3;
	isMultipleOf4 = digit % 4;
	isMultipleOf12 = digit % 12;


	if (!(isMultipleOf3) && !(isMultipleOf4)) {
		printf("%d는 12의 배수입니다.", digit);
	}
	else if (!isMultipleOf3) {
		printf("%d는 3의 배수입니다.", digit);
	}
	else if (!isMultipleOf4) {
		printf("%d는 4의 배수입니다.", digit);
	}
	else {
		printf("%d는 3의 배수, 4의 배수가 아닙니다!", digit);
	}*/

	//-----------------------------------------------------------------------

	// 사용자에게 키와 나이를 입력받고
	// 10살 이상, 160cm 이상이면 놀이기구 탑승 가능
	// 아니면 탑승 불가능 출력하기

	//int height, age; // 키와 나이
	//int isAgeOk, isHeightOk; // 키와 나이 조건 판단

	//printf("키와 나이로 놀이기구 탑승 가능 여부를 판단해주는 프로그램입니다.\n");

	//printf("키를 입력하세요. >> ");
	//scanf_s("%d", &height);

	//printf("나이를 입력하세요. >> ");
	//scanf_s("%d", &age);

	//isAgeOk = age >= 10;
	//isHeightOk = height >= 160;

	//if (isAgeOk && isHeightOk) {
	//	printf("놀이기구 탑승 가능합니다.");
	//}
	//else {
	//	printf("놀이기구 탑승이 불가능합니다.");
	//}

	//-----------------------------------------------------------------------

	// 사용자에게 시험 점수를 입력받고
	// 점수가 90 이상이라면 A학점
	// 80 이상 90 미만이라면 B학점
	// 70 이상 80 미만이라면 C학점
	// 70 미만이라면 F학점


printf("입력한 점수의 학점을 알려주는 프로그램입니다.\n");

int test; // 시험 성적
char grade; // 학점

printf("점수를 입력해주세요. >>");
scanf_s("%d", &test);

if (test >= 90) {
	grade = 'A';
}
else if (test >= 80) { // 90 이상이 거짓이므로 90 미만의 조건이 이미 포함되어 있음
	grade = 'B';
}
else if (test >= 70) {
	grade = 'C';
}
else {
	grade = 'F';
}

printf("\n학점: %c", grade);








}