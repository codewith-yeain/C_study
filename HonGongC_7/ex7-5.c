#include <stdio.h>

// 재귀호출 함수
void fruit(int count);

int main(void)
{
	fruit(1);


	return 0;
}

void fruit(int count)
{
	printf("apple\n");
	if (count == 3) return;
	fruit(count + 1);

	// 재귀호출과 반복문의 차이점
	printf("jam\n");
	// 재귀호출 함수의 경우 최초 호출한 곳이 아니라 이전에 호출했던 곳으로 돌아감
}