#include <stdio.h>

int main(void)
{
	int a;

	// &(���ۻ���): ������ �ּҸ� ���ϴ� ������
	scanf_s("%d", &a);
	printf("�Էµ� ��: %d\n", a);

	// scanf �Լ� ��� ������
	// 1. ������ ������ & ���̱�
	// 2. ����� ��ȯ ���ڿ� �´� ������ ������ �Է�

	puts("----------------------------------------------\n");

	int age;
	double height;

	printf("���̿� Ű�� �Է��ϼ��� : ");
	scanf_s("%d%lf", &age, &height);		// �� ���� ������ �Է� �ޱ�
	printf("���̴� %d��, Ű�� %.1lfcm�Դϴ�.\n", age, height);

	puts("----------------------------------------------\n");

	char grade;
	char name[20];

	printf("���� �Է� : ");
	scanf_s(" %c", &grade);
	printf("�̸� �Է� : ");
	scanf_s(" %s", name);	// name �迭�� �̸� ���ڿ� �Է�. &�� ������� �ʴ´�.
	printf("%s�� ������ %c�Դϴ�.\n", name, grade);





	return 0;
}