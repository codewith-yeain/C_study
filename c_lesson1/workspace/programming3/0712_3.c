#include <stdio.h>

void main() {
	/*
	������ �Է� �޾Ƽ� �ش� ������ ���� �ڸ��� ���� �ڸ� ����ϱ�

	�Է� ����: 10

	��� ����
		���� �ڸ�: 1
		���� �ڸ�: 0

	*/

	printf("�Է��� ������ ���� �ڸ��� ���� �ڸ��� ����ϴ� ���α׷��Դϴ�.\n");
	printf("������ �Է����ּ���>\n");

	int num;
	scanf_s("%d", &num);

	/*printf("�Է��� ����: %d", num);*/

	int smallNum = num % 10;
	int bigNum = num / 10;

	printf("���� �ڸ�: %1d\n", bigNum);
	printf("���� �ڸ�: %d\n", smallNum);



	printf("-----------------------------------------------------------\n");

	printf("�뷡 �� ��� 300���� ���� �뷡�濡�� �θ� �� �ִ� �뷡 ���� �ܵ�\n");

	int price = 300;

	int won;
	scanf_s("%d", &won);

	int song, temp;

	song = won / price;
	temp = won - (song * price);

	printf("�θ� �� �ִ� �뷡 ��: %d��\n", song);
	printf("�ܵ�: %d��\n", temp);

	printf("-----------------------------------------------------------\n");

	printf("����ڿ��� ���� �ҹ��ڸ� �Է¹޾Ƽ� �ش� �ҹ��ڸ� �빮�ڷ� �ٲپ� ����ϱ�\n");

	char small;
	scanf_s(" %c", &small);
	// �� ���� Enter�� ģ ���� �ִٸ� Enter ���� ���� ���� �ǹǷ� �տ� ���� �ʼ�

	char big;
	big = small - 32;

	printf("�Է��Ͻ� �ҹ���: %c\n", small);
	printf("�ٲ� �빮��: %c", big);
}