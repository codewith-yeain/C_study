#include <stdio.h>


// �Լ��� ����� ���Ǹ� ���ÿ� ����
// �Ű������� ������ �� �� �ִ� �Լ��� ����
// ������ ���� ���, ���ϰ��� Ÿ���� ���� �տ� �����ش�.
int add(int a, int b) {
	return a + b;
}

// void�� ���� Ÿ���� ���� �� ����Ѵ�.
void printName(int cnt, char* name);

// [�ǽ�]
// ����ڿ��� ������ �Է� �޾Ƽ� �ش� ������
// ¦������ Ȧ������ �Ǻ��ϴ� �Լ�
// ������ ¦���̸� 1 ����, Ȧ���̸� 0����
// �����Լ����� �׽�Ʈ���� �������ּ���!

int isEven(int num) {
	int result = num % 2 == 0;
	return result;
}

int main() {
	// �Ű������� 2�� �ִ� ���·� ���Ǹ� �� ���ұ� ������
	// �Ű������� �Ѱ����� ������ ������ �߻��Ѵ�.
	// add();

	// ������ ������ �Լ� ��� �κ� ��ü�� ���� ������ �����Ѵ� !!!!!
	int result = add(5, 1);
	printf("�Լ��� ���� ���: %d\n", result);

	result = add(10, 2);
	printf("�Լ��� ���� ���: %d\n", result);

	printName(5, "��ȣ��");


	result = isEven(5);
	printf("isEven(5)�� ���� ���: %d\n", result);

	result = isEven(8);
	printf("isEven(8)�� ���� ���: %d\n", result);

	return 1;
}

void printName(int cnt, char* name) {
	for (int i = 0; i < cnt; i++) {
		printf("%s\n", name);
	}
}