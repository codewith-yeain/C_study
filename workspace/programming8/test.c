#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	char country1[] = { 'k', 'o', 'r', 'e', 'a', '\0'/*NULL*/ }; // '\0' -> �ι���
	char country2[10] = "singapore"; // �ֵ���ǥ�� ����ϸ�, null���ڴ� �ڵ����� �߰��ȴ�.
	char country3[10] = "USA";


	printf("%s\n", country1);
	printf("%s\n", country2);
	printf("%s\n", country3);

	printf("%d\n", sizeof(country3)); // �� ���� �迭�� �� ä���� �ʴ��� ������� �״�δ�.
	printf("%c\n", country3[9]); // �����Ⱚ�� �ƴϰ�, �̻��� ���� �ƴ� �� ������ ä���� �ִ�.


	printf("\n-----���ڿ� �Է¹ޱ�-----\n");

	char input[100];
	// scanf���� ������ �ּҸ� �˷�����Ѵ�.
	// input�� �迭�̱� ������ �ּ��̴�.
	// ���� &�� ���� �� �ʿ䰡 ����.

	/*scanf("%s", input);*/
	//&�� ���� ���� -> �Է� ���� ���� ������ �ּҰ��� �˷��ִ� ��ȣ

	/*printf("�ԷµȰ�: %s\n", input);
	
	printf("sizeof(input): %d\n", sizeof(input));
	printf("strlen(input): %d\n", strlen(input));*/
}