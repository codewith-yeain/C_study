#include <stdio.h>

// 주소와 포인터의 크기

int main(void)
{
	char ch;
	int in;
	double db;

	char* pc = &ch;
	int* pi = &in;
	double* pd = &db;

	printf("char형 변수의 주소 크기 : %d\n", sizeof(&ch));
	printf("int형 변수의 주소 크기 : %d\n", sizeof(&in));
	printf("double형 변수의 주소 크기 : %d\n", sizeof(&db));
	printf("");
	printf("char * 포인터의 크기 : %d\n", sizeof(pc));
	printf("int * 포인터의 크기 : %d\n", sizeof(pi));
	printf("double * 포인터의 크기 : %d\n", sizeof(pd));
	printf("");

	// 포인터의 크기는 같지만, 가리키는 변수의 크기는 다르다.
	printf("char * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pc));
	printf("int * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pi));
	printf("double * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pd));

	// 포인터 대입 규칙
	/*
		1. 포인터는 가리키는 변수의 형태가 같을 때만 대입해야 함
		2. 형 변환을 사용한 포인터의 대입은 언제나 가능
	*/

	return 0;
}