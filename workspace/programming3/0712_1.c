#define _CRT_SECURE_NO_WARNINGS //���� ���� ��� ���� ǥ�� ����
#include <stdio.h>

void main() {

	/*int num;
	printf("num�� �ּ� ���� %p", &num);*/

	/*int num1;
	int num2;

	scanf_s("%d", &num1);
	scanf_s("%d", &num2);

	printf("num1�� �� �ִ� ��: %d\n", num1);
	printf("num2�� �� �ִ� ��: %d\n", num2);*/


	printf("----------------------------------------------------\n");
	// ��¥�� �Է� �޾� ����ϴ� ���α׷�

	int month, day;

	printf("������ �� ���ΰ���?\n");
	scanf_s("%d", &month);

	printf("������ �� ���ΰ���?\n");
	scanf_s("%d", &day);

	printf("������ %d�� %d���Դϴ�.\n", month, day);

}