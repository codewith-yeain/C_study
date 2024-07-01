#include <stdio.h>

// 배열의 값을 출력하는 함수
void print_ary(int* pa);

int main(void)
{
	// 배열을 처리하는 함수
	int ary[5] = { 10, 20, 30, 40, 50 };

	print_ary(ary);		// 배열명을 주고 함수 호출

	return 0;
}

void print_ary(int* pa)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d ", pa[i]);	// pa로 배열 요소 표현식 사용
	}
}