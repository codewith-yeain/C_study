#include <stdio.h>

int main(void) 
{
	// char�� ������ ���
	char ch1 = 'A';
	char ch2 = 65;
	int ch3 = 65;

	printf("���� %c�� �ƽ�Ű �ڵ� �� : %d\n", ch1, ch1);

	// �������� char�̵�, int�̵� ��ȯ���� %d�� %c �Ѵ� ����� �����ϴ�.
	printf("char�� �����, �ƽ�Ű �ڵ� ���� %d�� ���� : %c\n", ch2, ch2);
	printf("int�� �����, �ƽ�Ű �ڵ� ���� %d�� ���� : %c\n", ch3, ch3);

	// ���� ���� ������ ����
	short sh = 32767;
	int in = 2147483647;
	long ln = 2147483647;
	long long lln = 123451234512345;

	printf("short�� ���� ���: %d\n", sh);
	printf("int�� ���� ���: %d\n", in);
	printf("long�� ���� ���: %ld\n", ln); // long Ÿ�� ��ȯ ���� %ld
	printf("long long�� ���� ���: %lld\n", lln); // long long Ÿ�� ��ȯ ���� %lld
	
	return 0;
}