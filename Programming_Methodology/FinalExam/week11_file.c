#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* cfPtr; // ���� ������ ���� �κ�

	if ((cfPtr = fopen("clients.txt", "w")) == NULL) {	// ������ �� �ȿ����� ��
		puts("File could not be opened");
	}
	else {												// ������ �� ������ ��. ���� ������ ������ ����� �װ� ����.
		puts("Enter the account, name, and balance.");	// ���� ���� ��ο� ���� �̸��� ������ �ִٸ� ��� ���� �� ���Ͼȿ� ��� ���� �������� ���� ���̴� ��
		puts("Enter EOF to end input.");
		printf("%s", "? ");

		unsigned int account;
		char name[30];
		double balance;

		scanf("%d%29s%lf", &account, name, &balance);

		while (!feof(stdin)) { // ����ڰ� eof�� �Է��� ���� �ƴ϶�� nonzero ����. while ����
			fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);
			printf("%s", "? ");
			scanf("%d%29s%lf", &account, name, &balance);
		}

		fclose(cfPtr); // �۾� ���� �� ���ϰ� ���� ����
	}
}