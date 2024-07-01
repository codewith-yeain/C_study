#include <stdio.h>

void main() {
	//int num = 20;

	//switch (num)
	//{
	//case 10:
	//	printf("num에 저장된 값은 10입니다.\n");
	//	break;
	//case 7:
	//	printf("num에 저장된 값은 7입니다.\n");
	//	break;
	//case 5:
	//	printf("num에 저장된 값은 5입니다.\n");
	//	break;
	//case 3:
	//	printf("num에 저장된 값은 3입니다.\n");
	//	break;
	//default:
	//	printf("그 외의 수입니다.\n");
	//	/*break;*/
	//}


	//-----------------------------------------------------------------
	// 사용자에게 시험 점수를 입력받고
	// 점수가 90 이상이라면 A학점
	// 80 이상 90 미만이라면 B학점
	// 70 이상 80 미만이라면 C학점
	// 70 미만이라면 F학점

	printf("입력하신 점수에 맞는 학점을 알려주는 프로그램입니다.\n");

	int score;
	char grade;

	

	printf("점수를 입력해주세요 >> ");
	scanf_s("%d", &score);

	int temp = score / 10;

	switch (temp) {
	case 10: //중복제거
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	default:
		grade = 'F';
	}

	printf("학점: %c", grade);
}