#include <stdio.h>


// ���ڿ� 10���� ����� ����.
// ����� ������ �Է� �޾Ƽ�, �� ���� ���ڰ� �ʿ����� ���

// �Է� ����: 15
// ��� ����: 2���ڰ� �ʿ��մϴ�.

// �Է� ����: 20
// ��� ����: 2���ڰ� �ʿ��մϴ�.
void main() {

	int box; // �ʿ��� ������ ����
	int ramen; // ���ڿ� ���� ����� ����
	int temp = 10;
	int isTrue;
	
	printf("����� ���� �� �ʿ��� ������ ���� �˷��ִ� ���α׷��Դϴ�.");
	printf("���ڿ� �־�� �� ����� �� ������ �Է����ּ���>");
	
	scanf_s("%d", &ramen);

	isTrue = ramen % temp == 0;
	box = isTrue ? ramen / temp : ramen / temp + 1;
	printf("%d���ڰ� �ʿ��մϴ�.", box);




	printf("\n------------------------------------------------------\n");
	// �� ������ �Է� �޾Ƽ� �� ���� ��(ū �� - ���� ��)�� ���ϱ�

	int num1, num2, result;
	int isNum1Bigger;

	printf("�Է��Ͻ� �� ���� �� �� ū ���ڸ� �������� �� ���� ���� ���ϴ� ���α׷��Դϴ�.\n");
	printf("�� ������ ���͸� �������� �Է��� �ּ���.\n");

	scanf_s("%d%d", &num1, &num2);

	isNum1Bigger = num1 > num2;

	result = isNum1Bigger ? num1 - num2 : num2 - num1;
	printf("���: %d", result);


	printf("\n------------------------------------------------------\n");
	// ����
	// number1 �� �� ũ�� 1
	// number2 �� �� ũ�� 2
	// �� ���� ������ 0 ���

	int number1, number2, result;

	scanf_s("%d%d", &number1, &number2);

	result = number1 > number2 ? 1 : number1 < number2 ? 2 : 0;

	printf("���: %d", result);


}