#include <stdio.h>

void main() {
	printf("너의 이름이 긴 밤을 지나\n");
	printf("찰나가 영원이 될 때");

	printf("너의 이름이 긴 밤을 지나\t");
	printf("찰나가 영원이 될 때");

	printf("\n나는 너에게 \"사랑해\"라고 말했다.");

	printf("\n제어문자는 \\로 시작합니다.");

	printf("\n------------------------------------------------\n");
	printf("오늘은 %d일입니다.\n", 11);
	printf("나의 학점은 %c입니다.\n", 'A');
	printf("나의 학점은 %5c입니다.\n", 'A');

	printf("파이는 %.2lf입니다.\n", 3.14);
	printf("파이는 %10.2lf입니다.\n", 3.14);
	printf("파이는 %-10.2lf입니다.\n", 3.14);

	printf("나의 나이는 %d살이고, 학점은 %c이고, 평균은 %.2lf입니다.\n", 21, 'A', 92.7777);

	// 변수를 사용해서 해보자!
	int age = 21;
	char grade = 'A';
	double ave = 92.7777;

	printf("나의 나이는 %d살이고, 학점은 %c이고, 평균은 %.2lf입니다.\n", age, grade, ave);
}