#include <stdio.h>

void main() {
	/*���� �� ���� �Է� �޾�
	�Ҽ��� �Ʒ� �� �ڸ����� ����� ����ϱ�*/

	int num1, num2, num3;
	int sum;
	double avg;

	printf("�� ������ ����� ���ϴ� ���α׷��Դϴ�.\n");
	printf("ù ��° ������ �Է����ּ���>");
	scanf_s("%d", &num1);

	printf("�� ��° ������ �Է����ּ���>");
	scanf_s("%d", &num2);

	printf("�� ��° ������ �Է����ּ���>");
	scanf_s("%d", &num3);

	sum = num1 + num2 + num3;
	avg = (double)sum / 3;

	printf("�Է��Ͻ� �� ������ ����� %.2lf�Դϴ�.", avg);
}