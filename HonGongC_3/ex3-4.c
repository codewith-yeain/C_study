#include <stdio.h>

int main(void)
{
	// 정수형을 양수 전용으로 쓰고 싶을 때 사용하는 unsigned
	// 나이와 같이 음수가 없는 데이터를 저장할 때는 unsigned를 사용해 두배 더 넓은 번위의 값을 저장
	// unsigned가 없으면 signed가 디폴트
	// unsigned를 잘못 사용한 경우

	unsigned int a;

	a = 4294967295;
	printf("%d\n", a);

	a = -1;
	printf("%u\n", a);

	// unsigned 출력 시 변환 문자 사용 주의점
	// 1. unsigned 변수에 큰 양수 저장 후 %d로 출력하면 음수가 출력될 가능성이 있음(부호가 고려되므로)
	// 2. unsigned 변수에 음수를 저장하고 %u로 출력하면 양수로 출력됨(부호를 고려하지 않으므로)
	// 따라서 unsigned 자료형 사용시에는 양수만 저장하고, %u로 출력하기

	return 0;
}