#include <stdio.h>

void main() {
	int ar[3] = { 10, 20, 30 };

	// �迭�� ����Ǿ��ִ� �������� �� ��������
	printf("���� �� ar[0] : %d\n", ar[0]);

	// �迭 �� ��� �����ϱ�
	ar[0] = 100;
	printf("���� �� ar[0] : %d\n", ar[0]);

	// sizeof ������
	printf("sizeof(ar): %d\n", sizeof(ar)); // int�� 4byte�� 12�� ����� ����
	printf("sizeof(int): %d\n", sizeof(int));
	printf("�迭 �� ����� ����: %d\n", sizeof(ar) / sizeof(int));

	// �迭�� for���� �ݶ�
	for (int i = 0; i < sizeof(ar) / sizeof(int); i++) {
		printf("ar[%d]�� ���� %d\n", i, ar[i]);
	}

	// {0}�� ����ϸ� ��� 0���� �ʱ�ȭ�ȴ�.
	int ar2[3] = { 0 };
	ar2[0] = 300;

	for (int i = 0; i < sizeof(ar2) / sizeof(int); i++) {
		printf("ar2[%d]�� ���� %d\n", i, ar2[i]);
	}


}