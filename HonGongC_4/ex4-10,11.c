#include <stdio.h>

int main(void)
{
	// 복합 대입 연산자
	int a = 10, b = 20;
	int res = 2;

	a += 20;
	res *= b + 10; // b에 10을 더한 결과값에 res를 곱하고 다시 res에 저장

	printf("a = %d, b = %d\n", a, b);
	printf("res = %d\n", res);

	// 콤마 연산자: 한 번에 여러개의 수식을 차례로 나열해야할 때 사용. 왼쪽부터 오른쪽으로 연산 수행.
	// 가장 오른쪽의 피연산자가 최종 결괏값이 됨
	int c = 10, d = 20;
	int output;

	output = (++c, ++d); // 콤마 연산자는 대입 연산자보다 우선순위가 낮은 유일한 연산자. 따라서 괄호 반드시 필요(최단산쉬관리삼대콤)

	printf("c:%d, d:%d\n", c, d);
	printf("output:%d\n", output);

	return 0;
}