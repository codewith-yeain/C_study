#include <stdio.h>

void main() {
	//int num = 20;

	//switch (num)
	//{
	//case 10:
	//	printf("num�� ����� ���� 10�Դϴ�.\n");
	//	break;
	//case 7:
	//	printf("num�� ����� ���� 7�Դϴ�.\n");
	//	break;
	//case 5:
	//	printf("num�� ����� ���� 5�Դϴ�.\n");
	//	break;
	//case 3:
	//	printf("num�� ����� ���� 3�Դϴ�.\n");
	//	break;
	//default:
	//	printf("�� ���� ���Դϴ�.\n");
	//	/*break;*/
	//}


	//-----------------------------------------------------------------
	// ����ڿ��� ���� ������ �Է¹ް�
	// ������ 90 �̻��̶�� A����
	// 80 �̻� 90 �̸��̶�� B����
	// 70 �̻� 80 �̸��̶�� C����
	// 70 �̸��̶�� F����

	printf("�Է��Ͻ� ������ �´� ������ �˷��ִ� ���α׷��Դϴ�.\n");

	int score;
	char grade;

	

	printf("������ �Է����ּ��� >> ");
	scanf_s("%d", &score);

	int temp = score / 10;

	switch (temp) {
	case 10: //�ߺ�����
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	default:
		grade = 'F';
	}

	printf("����: %c", grade);
}