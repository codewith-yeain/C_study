#include <stdio.h>

void swap1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void change1(int temp) {
	temp = 100;
}

void swap2(int* c, int* d) {
	int temp = *c;
	*c = *d;
	*d = temp;
}

void change2(int *temp) {
	*temp = 555;
}

void main() {
	printf("----------Call By Value----------\n");
	int a = 100;
	int b = 10;
	printf("변경 전 a: %d, b: %d\n", a, b);
	swap1(a, b);
	printf("변경 후 a: %d, b: %d\n", a, b);


	int data1 = 22;
	printf("변경 전 data1: %d\n", data1);
	change1(data1);
	printf("변경 후 data1: %d\n", data1);

	printf("----------Call By Reference----------\n");
	int c = 100;
	int d = 10;
	printf("변경 전 c: %d, d: %d\n", c, d);
	swap2(&c, &d);
	printf("변경 후 c: %d, d: %d\n", c, d);

	int data2 = 22;
	printf("변경 전 data2: %d\n", data2);
	change2(&data2);
	printf("변경 후 data2: %d\n", data2);

}