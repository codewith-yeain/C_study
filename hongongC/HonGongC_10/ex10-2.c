#include <stdio.h>

int main(void) {
	// �迭��ó�� ���Ǵ� ������

	int ary[4];
	int* pa = ary; // �����Ϳ� �迭�� ����. ary�� int�� ������ �ּ��̹Ƿ� int���� ����Ű�� �����Ϳ� ���� ����
	int i;

	*pa = 10;
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1];	// ���ȣ�� �Ἥ pa�� �迭��ó�� ��� !!

	for (i = 0; i < 3; i++)
	{
		printf("%5d", pa[i]);
	}

	return 0;
}