#include <stdio.h>

int global = 0;

void f() {
	// ����ƽ����
	// ��� ������ ������ ���������� ����������
	// �޸𸮿����� ������ ���α׷��� ����� ���̴�.

	static int a = 0;
	int b = 0;

	a++;
	b++;
	printf("a: %d, b: %d\n", a, b);
}

void f2() {
	printf("���� ���� global: %d\n", global);
}

void f3(int num) {
	num = 100;
	printf("f3 ������ num�� ��: %d\n", num);
}

void main() {
	f();
	f();

	f2();
	global = 500;
	printf("���� ���� global: %d\n", global);

	int num = 10;
	f3(num);
	printf("main ������ num�� ��: %d\n", num);

}