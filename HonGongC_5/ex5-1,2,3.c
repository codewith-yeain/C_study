#include <stdio.h>

int main(void)
{
	// 1. if���� �⺻ ����
	int a = 20;
	int b = 0;

	if (a > 10)
	{
		b = a;
	}

	printf("a : %d, b : %d\n", a, b);

	// 2. if ~ else��: �� ���� �ϳ��� �ݵ�� ����ϴ� ���
	int c = 10;
	if (c >= 0) {
		c = 1;
	}
	else
	{
		c = -1;
	}

	printf("c : %d\n", c);

	// 3. if ~ else if ~ else�� : 3���� ���๮
	// ����: ���ǽ��� ���ʷ� �˻��ϹǷ� ���� ������ ����� �ݿ��� !!!
	int x = 0, y = 0;

	if (x > 0)
	{
		y = 1;
	}
	else if (x == 0)
	{
		y = 2;
	}
	else
	{
		y = 3;
	}

	printf("y : %d\n", y);


	return 0;
}