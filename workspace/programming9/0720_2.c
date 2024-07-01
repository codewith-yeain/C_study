#include <stdio.h>

void main() {
	// 배열 포인터
	int ar1[5] = { 1, 2, 3, 4, 5 };
	int* ptr = ar1;

	printf("%d\n", ptr);
	printf("%d\n", *ptr);

	// 포인터 배열
	int* ar2[10];
	int* a, b;
	int data = 10;
	int nums[5] = { 10, 20, 30, 40, 50 };

	a = &data;
	b = nums;

	ar2[0] = a;
	ar2[1] = b;

	printf("ar2에 저장된 주소 %d\n", ar2);
	printf("ar2에 저장된 값 %d\n", *ar2);
	printf("ar2에 저장된 값 %d\n", *(*ar2));
	printf("ar2에 저장된 값 %d\n", *ar2[0]);


	printf("\n--------------------------------------\n");
	// [실습]
	// for문 돌려서 ar2[1]에 들어있는 배열의 주소로 접근해서
	// 값을 다 뽑아보세요!
	
	for (int i = 0; i < 5; i++) {
		printf("%d\n", *(ar2[1] + i));
	}


}