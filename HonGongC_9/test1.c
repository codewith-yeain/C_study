#include <stdio.h>

// sizeof ����
// 288�� 2��

int main(void)
{
	char* pc;
	double* pd;

	printf("������ ���� pc�� ũ��: %d\n", sizeof(pc));
	printf("������ ���� pd�� ũ��: %d\n", sizeof(pd));

	printf("������ ���� pc�� ����Ű�� ���� ũ��: %d\n", sizeof(*pc));
	printf("������ ���� pd�� ����Ű�� ���� ũ��: %d\n", sizeof(*pd));
}