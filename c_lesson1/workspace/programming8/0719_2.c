#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	char country1[] = { 'k', 'o' ,'r' ,'e' ,'a', '\0'/*NULL*/ };
	char country2[10] = "singapore"; // 쌍따옴표를 사용하면, 널문자는 자동으로 추가된다.
	char country3[] = "USA";

	printf("%s\n", country1);
	printf("%s\n", country2);
	printf("%s\n", country3);

	printf("country3의 크기 : %d\n", sizeof(country3));

	printf("%c", country3[9]);

	printf("\n-----문자열 입력받기-----\n");

	char input[100];
	// scanf에는 저장할 주소를 알려줘야한다.
	// input은 배열이기 때문에 주소이다.
	// 따라서 &는 굳이 쓸 필요가 없다.
	scanf("%s", input);
	printf("입력된 값 : %s\n", input);

	printf("sizeof(input) : %d\n", sizeof(input));
	printf("strlen(input) : %d\n", strlen(input));

	// input에 입력된 영어를 대문자는 소문자로, 소문자는 대문자로,
	// 나머지는 그대로 출력하는 프로그램 만들기!
	//for (int i = 0; i < strlen(input); i++) {
	int i = 0;
	while (input[i] != '\0') {
		if (input[i] >= 97 && input[i] <= 122) {
			// 소문자일 때 들어오는 영역
			printf("%c", input[i] - 32);
		}
		else if (input[i] >= 65 && input[i] <= 90) {
			printf("%c", input[i] + 32);
		}
		else {
			printf("%c", input[i]);
		}
		i++;
	}
	//}
}