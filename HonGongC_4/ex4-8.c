#include <stdio.h>

int main(void)
{
	// 형 변환 연산자

	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b);
	printf("a = %d, b = %d\n", a, b);
	printf("a/b의 결과: %.lf\n", res);

	a = (int)res;
	printf("(int) %.1lf의 결과 : %d\n", res, a);

	// 컴퓨터는 데이터의 형태에 따라 다른 연산 방법을 사용하므로 피연산자가 2개 이상이라면 피연산자의 형태는 같아야 함
	// 따라서 컴파일러는 컴파일 과정에서 피연산자의 형태가 다르면 형태를 일치시키는 작업을 수행 (자동 형변환)

	// 이런 형 변환의 기본 규칙은 데이터 크기가 작은 값이 크기가 큰 값으로 바뀌는 것
	// 다만 대입연산은 메모리에 값을 저장하므로 무조건 좌항의 변수형에 맞게 저장됨


	return 0;
}