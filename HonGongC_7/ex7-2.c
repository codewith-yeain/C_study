#include <stdio.h>

// �Ű������� ���� �Լ�
int get_num(void);


int main(void)
{
	
	int result;

	result = get_num();
	printf("��ȯ�� : %d\n", result);


	return 0;
}

int get_num(void)
{
	int num;

	printf("��� �Է� : ");
	scanf_s("%d", &num);
	
	while (num <= 0)
	{
		printf("����� �Է��ϼ���!\n");
		printf("��� �Է� : ");
		scanf_s("%d", &num);
	}

	return num;
}