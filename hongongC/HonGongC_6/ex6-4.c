#include <stdio.h>;

int main(void)
{
	int i, j;

	// ��ø �ݺ��������� �� �ݺ����� ���� �������� ���� ������ ����ؾ� ��
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}