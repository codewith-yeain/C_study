#include <stdio.h>

int main(void)
{
	// const�� ����ϴ� ������
	int a = 10, b = 20;

	// ���⼭ ���� const�� �ǹ�: pa�� ����Ű�� ���� a�� pa�� "���� ����"�� �ٲ� �� ���ٴ� ��
	const int* pa = &a;

	printf("���� a �� : %d\n", *pa);

	pa = &b;
	printf("���� b�� �� : %d\n", *pa);

	pa = &a;
	a = 20;		// a�� ���� ����. *pa = 20 �Ұ���.
	printf("���� a�� �� : %d\n", *pa);

	return 0;
}