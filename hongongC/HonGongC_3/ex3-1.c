#include <stdio.h>

int main(void)
{
	// 변수: 데이터를 저장하는 공간
	// 자료형/데이터형/data type: 변수의 형태. 데이터의 종류에 따라 구분 됨.
	// 변수 선언을 통해 메모리에 저장 공간 확보
	// 문자열 char 배열

	int a;
	int b, c; // 2개의 int형 변수 b와 c를 동시에 선언
	double da;
	char ch;

	// 초기화
	a = 10;
	b = a; // 저장 공간으로 사용된 변수 b를 l-value(left value), 값으로 사용된 변수를 r-value(right value)라고 함.
	c = a + 20;
	da = 3.5;
	ch = 'A';

	// 중괄호의 블록 안에 변수를 선언하며 선언한 위치부터 블록 끝까지 사용 가능함

	// 연산, 출력, 대입 시에는 저장공간에서 값을 복사해서 사용하므로 변수의 값이 바뀌지 않는다.
	return 0;
}