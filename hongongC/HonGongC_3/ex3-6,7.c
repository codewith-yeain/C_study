#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char fruit[20] = "strawberry";

	printf("���� : %s\n", fruit);
	printf("������ : %s %s\n", fruit, "jam"); // ���ڿ� ����� ���� %s�� ���

	// ����: �迭���� ���� ������ ��� �Ұ���
	// fruit = "banana"; -> �迭�� ����� ���Ŀ� ���� �����ڷ� ���ڿ��� �Է��� �� ����.

	printf("�� : %s\n", fruit);
	strcpy(fruit, "banana");
	printf("�� : %s\n", fruit);

	return 0;

}