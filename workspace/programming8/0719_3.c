#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	// strcmp(���ڿ�1, ���ڿ�2);
	// ���ڿ� 1�� ���ڿ� 2�� ���ٸ� 0
	// ���ڿ� 1�� ���ڿ� 2���� �ƽ�Ű�ڵ尪�� �����ٸ� -1
	// ���ڿ� 1�� ���ڿ� 2���� �ƽ�Ű�ڵ尪�� �����ٸ� 1

	printf("%d\n", strcmp("apple", "apple")); // ���: 0 -> ����
	printf("%d\n", strcmp("apple", "banana")); // ���: -1 -> �ٸ���,  �տ� �ִ� �ְ� �� ������
	printf("%d\n", strcmp("banana", "apple")); // ���: 1 -> �ٸ���, �ڿ� �ִ� �ְ� �� ������

	// strcat(������, ���ڿ� ��)
	// �ش� ������ ����ִ� ���ڿ��� �ڿ� �������� ���ڿ��� �����ؼ� �ش� ������ �������ش�.
	char target[10] = "hi";
	strcat(target, "bye");
	printf("���: %s\n", target); // �߰��� null���ڴ� ��� ����?

	char str1[] = "korea";
	/*str1 = "singapore";*/ // �Ұ���
	//strcpy(�ٲ��� ����, �ٲ� ���ڿ� ��); ���ڿ� ���� ��������ش�.
	strcpy(str1, "singapore");
	printf("�ٲ� ��: %s\n", str1);


}