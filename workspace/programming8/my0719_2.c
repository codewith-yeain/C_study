#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	//char country1[] = { 'k', 'o' ,'r' ,'e' ,'a', '\0'/*NULL*/ };
	//char country2[10] = "singapore"; // �ֵ���ǥ�� ����ϸ�, �ι��ڴ� �ڵ����� �߰��ȴ�.
	//char country3[] = "USA";

	//printf("%s\n", country1);
	//printf("%s\n", country2);
	//printf("%s\n", country3);

	//printf("country3�� ũ�� : %d\n", sizeof(country3));

	//printf("%c", country3[9]);

	printf("\n-----���ڿ� �Է¹ޱ�-----\n");

	char input[100];
	// scanf���� ������ �ּҸ� �˷�����Ѵ�.
	// input�� �迭�̱� ������ �ּ��̴�.
	// ���� &�� ���� �� �ʿ䰡 ����.
	printf("�ҹ��ڸ� �빮�ڷ�, �빮�ڸ� �ҹ��ڷ� �ٲپ� ������ִ� ���α׷��Դϴ�.\n");
	printf("�Է����ּ��� >>");
	scanf("%s", input);
	printf("�Էµ� �� : %s\n", input);

	/*printf("sizeof(input) : %d\n", sizeof(input));
	printf("strlen(input) : %d\n", strlen(input));*/

	// for�� ���
	/*printf("���: ");
	for (int i = 0; i < strlen(input); i++) {
		int temp = (int)input[i];
		int eng = temp >= 97 ? temp - 32 : temp + 32;
		printf("%c", eng);
	}*/

	// while�� ���
	printf("���: ");
	int num = 0;
	while (num < strlen(input)) {
		int temp = (int)input[num];
		int eng = temp >= 97 ? temp - 32 : temp + 32;
		printf("%c", eng);
		num++;
	}
}