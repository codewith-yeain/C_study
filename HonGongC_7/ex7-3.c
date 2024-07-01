#include <stdio.h>


// 반환값이 없는 함수
void print_char(char ch, int count);

int main(void)
{
	print_char('@', 5);

	return 0;
}

void print_char(char ch, int count)
{
	int i;

	for (i = 0; i < count; i++)
	{
		printf("%c", ch);
	}

	return; // 반환값이 없으므로 return문 단독 사용. 생략 가능. 함수의 종료 의미.
}