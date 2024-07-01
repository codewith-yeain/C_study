#include <stdio.h>

// sizeof 정리
// 288쪽 2번

int main(void)
{
	char* pc;
	double* pd;

	printf("포인터 변수 pc의 크기: %d\n", sizeof(pc));
	printf("포인터 변수 pd의 크기: %d\n", sizeof(pd));

	printf("포인터 변수 pc가 가리키는 값의 크기: %d\n", sizeof(*pc));
	printf("포인터 변수 pd가 가리키는 값의 크기: %d\n", sizeof(*pd));
}