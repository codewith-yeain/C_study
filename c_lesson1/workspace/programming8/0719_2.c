#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	char country1[] = { 'k', 'o' ,'r' ,'e' ,'a', '\0'/*NULL*/ };
	char country2[10] = "singapore"; // �ֵ���ǥ�� ����ϸ�, �ι��ڴ� �ڵ����� �߰��ȴ�.
	char country3[] = "USA";

	printf("%s\n", country1);
	printf("%s\n", country2);
	printf("%s\n", country3);

	printf("country3�� ũ�� : %d\n", sizeof(country3));

	printf("%c", country3[9]);

	printf("\n-----���ڿ� �Է¹ޱ�-----\n");

	char input[100];
	// scanf���� ������ �ּҸ� �˷�����Ѵ�.
	// input�� �迭�̱� ������ �ּ��̴�.
	// ���� &�� ���� �� �ʿ䰡 ����.
	scanf("%s", input);
	printf("�Էµ� �� : %s\n", input);

	printf("sizeof(input) : %d\n", sizeof(input));
	printf("strlen(input) : %d\n", strlen(input));

	// input�� �Էµ� ��� �빮�ڴ� �ҹ��ڷ�, �ҹ��ڴ� �빮�ڷ�,
	// �������� �״�� ����ϴ� ���α׷� �����!
	//for (int i = 0; i < strlen(input); i++) {
	int i = 0;
	while (input[i] != '\0') {
		if (input[i] >= 97 && input[i] <= 122) {
			// �ҹ����� �� ������ ����
			printf("%c", input[i] - 32);
		}
		else if (input[i] >= 65 && input[i] <= 90) {
			printf("%c", input[i] + 32);
		}
		else {
			printf("%c", input[i]);
		}
		i++;
	}
	//}
}