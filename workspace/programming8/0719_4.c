#include <stdio.h>

void main() {
	int num = 10;
	int* nPtr = &num;

	printf("num�� �ּ�: %d\n", &num);
	printf("nPtr�� ����ִ� ��: %d\n", nPtr);

	printf("%d\n", *nPtr);

	*nPtr = 200; // �ּҷ� �����ؼ� ���� �ٲ�

	printf("%d\n", num);

}