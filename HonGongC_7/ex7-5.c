#include <stdio.h>

// ���ȣ�� �Լ�
void fruit(int count);

int main(void)
{
	fruit(1);


	return 0;
}

void fruit(int count)
{
	printf("apple\n");
	if (count == 3) return;
	fruit(count + 1);

	// ���ȣ��� �ݺ����� ������
	printf("jam\n");
	// ���ȣ�� �Լ��� ��� ���� ȣ���� ���� �ƴ϶� ������ ȣ���ߴ� ������ ���ư�
}