#include <stdio.h>

int main(void)
{
	int a;

	// &(앰퍼샌드): 변수의 주소를 구하는 연산자
	scanf_s("%d", &a);
	printf("입력된 값: %d\n", a);

	// scanf 함수 사용 주의점
	// 1. 변수명 지정시 & 붙이기
	// 2. 사용한 변환 문자와 맞는 형태의 데이터 입력

	puts("----------------------------------------------\n");

	int age;
	double height;

	printf("나이와 키를 입력하세요 : ");
	scanf_s("%d%lf", &age, &height);		// 한 번에 여러개 입력 받기
	printf("나이는 %d살, 키는 %.1lfcm입니다.\n", age, height);

	puts("----------------------------------------------\n");

	char grade;
	char name[20];

	printf("학점 입력 : ");
	scanf_s(" %c", &grade);
	printf("이름 입력 : ");
	scanf_s(" %s", name);	// name 배열에 이름 문자열 입력. &를 사용하지 않는다.
	printf("%s의 학점은 %c입니다.\n", name, grade);





	return 0;
}