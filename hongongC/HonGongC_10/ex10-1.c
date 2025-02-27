#include <stdio.h>


// 배열명으로 배열 요소 사용하기
// 주소값의 연산 - 정수 덧셈
// 주소 + 정수 -> 주소 + (정수 * 주소를 구한 변수의 크기)

int main(void)
{
	// 배열명에 정수 연산을 수행해 배열 요소 사용
	int ary[3];
	int i;

	*(ary + 0) = 10; // ary[0] = 10;
	*(ary + 1) = *(ary + 0) + 10; // ary[1] = ary[0] + 10;

	printf("세 번째 배열 요소에 키보드 입력 : ");
	scanf_s("%d", ary + 2);		// &ary[2]

	for (i = 0; i < 3; i++)
	{
		printf("%5d", *(ary + i));	// ary[i]
	}

	return 0;
}