#include <stdio.h>

int main(void) 
{
	// printf: 문자열을 출력하는 함수. print formatted라는 뜻을 지님
	printf("Be happy"); 
	printf("My friend");
	// 출력결과: Be happyMy friend -> 제어문자 사용 필요

	printf("\nBe happy\n");
	printf("My friend\n");

	// \b(백스페이스, backspace): 한 칸 왼쪽으로 이동
	printf("Goot\bd\tchance\n");

	// \r(캐리지 리턴, carriage return): 맨 앞으로 이동
	// \a(알럿 경보, alert): 벨소리
	printf("Cow\rW\a\n");


	return 0;
}