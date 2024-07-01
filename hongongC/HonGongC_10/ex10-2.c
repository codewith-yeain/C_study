#include <stdio.h>

int main(void) {
	// 배열명처럼 사용되는 포인터

	int ary[4];
	int* pa = ary; // 포인터에 배열명 저장. ary는 int형 변수의 주소이므로 int형을 가리키는 포인터에 저장 가능
	int i;

	*pa = 10;
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1];	// 대괄호를 써서 pa를 배열명처럼 사용 !!

	for (i = 0; i < 3; i++)
	{
		printf("%5d", pa[i]);
	}

	return 0;
}