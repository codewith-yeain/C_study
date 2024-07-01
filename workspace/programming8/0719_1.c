#include <stdio.h>

void main() {
	int ar[3] = { 10, 20, 30 };

	// 배열에 저장되어있는 개별적인 값 가져오기
	printf("변경 전 ar[0] : %d\n", ar[0]);

	// 배열 속 요소 수정하기
	ar[0] = 100;
	printf("변경 후 ar[0] : %d\n", ar[0]);

	// sizeof 연산자
	printf("sizeof(ar): %d\n", sizeof(ar)); // int는 4byte라서 12가 결과로 나옴
	printf("sizeof(int): %d\n", sizeof(int));
	printf("배열 속 요소의 갯수: %d\n", sizeof(ar) / sizeof(int));

	// 배열과 for문의 콜라보
	for (int i = 0; i < sizeof(ar) / sizeof(int); i++) {
		printf("ar[%d]의 값은 %d\n", i, ar[i]);
	}

	// {0}을 사용하면 모두 0으로 초기화된다.
	int ar2[3] = { 0 };
	ar2[0] = 300;

	for (int i = 0; i < sizeof(ar2) / sizeof(int); i++) {
		printf("ar2[%d]의 값은 %d\n", i, ar2[i]);
	}


}