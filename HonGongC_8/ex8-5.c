#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// ���ڿ��� �����ϴ� strcpy�Լ�
// strcpy(���⿡ ����, ���⼭ ����);

int main(void)
{
	char str1[80] = "cat";
	char str2[80];

	// ���ڿ� ����� char�� �迭�� ����
	strcpy(str1, "tiger");	// str1 �迭�� "tiger" ����

	// char�� �迭�� ����� ���ڿ��� �ٸ� char�� �迭�� ����
	strcpy(str2, str1);		// str2 �迭�� str1 �迭�� ���ڿ��� ����

	printf("%s, %s\n", str1, str2);
	
	return 0;
}