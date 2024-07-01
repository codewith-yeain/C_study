#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	char country1[] = { 'k', 'o', 'r', 'e', 'a', '\0'/*NULL*/ }; // '\0' -> 널문자
	char country2[10] = "singapore"; // 쌍따옴표를 사용하면, null문자는 자동으로 추가된다.
	char country3[10] = "USA";


	printf("%s\n", country1);
	printf("%s\n", country2);
	printf("%s\n", country3);

	printf("%d\n", sizeof(country3)); // 꽉 맞춰 배열을 다 채우지 않더라도 사이즈는 그대로다.
	printf("%c\n", country3[9]); // 쓰레기값도 아니고, 이상한 값도 아닌 널 값으로 채워져 있다.


	printf("\n-----문자열 입력받기-----\n");

	char input[100];
	// scanf에는 저장할 주소를 알려줘야한다.
	// input은 배열이기 때문에 주소이다.
	// 따라서 &는 굳이 쓸 필요가 없다.

	/*scanf("%s", input);*/
	//&를 쓰는 이유 -> 입력 받은 값을 저장할 주소값을 알려주는 기호

	/*printf("입력된값: %s\n", input);
	
	printf("sizeof(input): %d\n", sizeof(input));
	printf("strlen(input): %d\n", strlen(input));*/
}