#include <stdio.h>

int main(void)
{
	// switch ~ case ��
	// case�� default�� �ǳʶ� ��ġ�� ǥ���ϴ� ���̺��� ����
	// ���� break�� ���ٸ�, ���� case���� �� �� case�� �� �����
	int rank = 2, m = 0;

	switch (rank)
	{
	case 1:
		m = 300;
		break;
	case 2:
		m = 200;
		break;
	case 3:
		m = 100;
		break;
	default:
		m = 10;
		break;
	}
}