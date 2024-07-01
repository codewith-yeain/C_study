#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	//char country1[] = { 'k', 'o' ,'r' ,'e' ,'a', '\0'/*NULL*/ };
	//char country2[10] = "singapore"; // 쌍따옴표를 사용하면, 널문자는 자동으로 추가된다.
	//char country3[] = "USA";

	//printf("%s\n", country1);
	//printf("%s\n", country2);
	//printf("%s\n", country3);

	//printf("country3의 크기 : %d\n", sizeof(country3));

	//printf("%c", country3[9]);

	printf("\n-----문자열 입력받기-----\n");

	char input[100];
	// scanf에는 저장할 주소를 알려줘야한다.
	// input은 배열이기 때문에 주소이다.
	// 따라서 &는 굳이 쓸 필요가 없다.
	printf("소문자를 대문자로, 대문자를 소문자로 바꾸어 출력해주는 프로그램입니다.\n");
	printf("입력해주세요 >>");
	scanf("%s", input);
	printf("입력된 값 : %s\n", input);

	/*printf("sizeof(input) : %d\n", sizeof(input));
	printf("strlen(input) : %d\n", strlen(input));*/

	// for문 사용
	/*printf("결과: ");
	for (int i = 0; i < strlen(input); i++) {
		int temp = (int)input[i];
		int eng = temp >= 97 ? temp - 32 : temp + 32;
		printf("%c", eng);
	}*/

	// while문 사용
	printf("결과: ");
	int num = 0;
	while (num < strlen(input)) {
		int temp = (int)input[num];
		int eng = temp >= 97 ? temp - 32 : temp + 32;
		printf("%c", eng);
		num++;
	}
}