#include <stdio.h>

int main(void)
{
	// �������� �켱������ ���� ����
	// �ִܻ꽬 ������� ��
	int a = 10, b = 5;
	int res;

	res = a / b * 2;	// �켱������ �����Ƿ� ���ʺ��� ���ʷ� ����
	printf("res = %d\n", res);

	res = ++a * 3;
	printf("res = %d\n", res);

	res = a > b && a != 5;
	printf("res = %d\n", res);

	res = a % 3 == 0;
	printf("res = %d\n", res);

	return 0;
}