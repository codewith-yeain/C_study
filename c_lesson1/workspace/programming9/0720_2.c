#include <stdio.h>

void main() {
	// �迭 ������
	int ar1[5] = { 1, 2, 3, 4, 5 };
	int* ptr = ar1;

	printf("%d\n", ptr);
	printf("%d\n", *ptr);

	// ������ �迭
	int* ar2[10];
	int* a, b;
	int data = 10;
	int nums[5] = { 10, 20, 30, 40, 50 };

	a = &data;
	b = nums;

	ar2[0] = a;
	ar2[1] = b;

	printf("ar2�� ����� �ּ� %d\n", ar2);
	printf("ar2�� ����� �� %d\n", *ar2);
	printf("ar2�� ����� �� %d\n", *(*ar2));
	printf("ar2�� ����� �� %d\n", *ar2[0]);


	printf("\n--------------------------------------\n");
	// [�ǽ�]
	// for�� ������ ar2[1]�� ����ִ� �迭�� �ּҷ� �����ؼ�
	// ���� �� �̾ƺ�����!
	
	for (int i = 0; i < 5; i++) {
		printf("%d\n", *(ar2[1] + i));
	}


}