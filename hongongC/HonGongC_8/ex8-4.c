#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���ڿ��� �����ϴ� char�� �迭
int main(void)
{
	// ���� ����� �ϳ��� �ʱ�ȭ
	// char str[80] =  {'a', 'p', 'p', 'l', 'e', 'j', 'a', 'm'};

	// ���ڿ� ����� �� ���� �ʱ�ȭ
	char str[80] = "applejam";

	printf("���� ���ڿ� : %s\n", str);
	printf("���ڿ� �Է� : ");
	scanf("%s", str);
	printf("�Է� �� ���ڿ� : %s\n", str);

	// �ι���: char�� �迭�� ����� 0.
	// ���ڿ��� �����ϴ� char�� �迭����, ���� �迭 ��ҿ��� �ڵ����� 0�� ä����. �ƽ�Ű�ڵ� 0�� ��.


	return 0;
}