#include <stdio.h>

void main() {
	
	// ���ǽ� : ���� 0 �ƴϸ� 1�� �ִ� ��

	printf("\n--------------���� ������--------------\n");
	int num1 = 20, num2 = 30;

	printf("num1 > num2: %d\n", num1 > num2);
	printf("num1 < num2: %d\n", num1 < num2);
	printf("num1 >= num2: %d\n", num1 >= num2);
	printf("num1 <= num2: %d\n", num1 <= num2);
	printf("num1 == num2: %d\n", num1 == num2);
	printf("num1 != num2: %d\n", num1 != num2);

	printf("\n--------------�� ������--------------\n");
	int num3 = 10;

	printf("%d\n", num3 > 0 && num3 != 5);
	printf("%d\n", 10 && -5);
	printf("%d\n", 10 && 0);
	printf("%d\n", !10);
	printf("%d\n", !0);

	printf("\n--------------���� ������--------------\n");
	// ���ǽ� ? ���϶� ��: ������ �� ��;
	// ���϶� ���� ���� �����϶� ���� ���� �ڷ����� ���ϵǾ� �־�� �Ѵ�.

	printf("%d\n", -5 ? 10 : 20);

	int result = -5 ? 10 : 20;
	printf("%d\n", result);

	// ���ڿ��� ���������ڴ� %s
	printf("%s", "����");
}