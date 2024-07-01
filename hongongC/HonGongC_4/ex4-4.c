#include <stdio.h>

int main(void)
{
	// 전위 표기와 후위 표기를 사용한 증감 연산
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3; // 전위형 증감 연산자
	post = (b++) * 3; // 후위형 증감 연산자

	printf("증감 연산 후 초깃값 a = %d, b = %d\n", a, b);
	printf("전위형: (++a) * 3 = %d, 후위형: (b++) * 3 = %d\n", pre, post);

	// (++a) * 3은 a의 값을 6으로 증가시킨 후에 3을 곱하므로 결과값이 18
	// (b++) * 3은 b의 값이 증가되기 전의 값을 3과 곱하므로 결과값이 15
	// 물론 연산이 끝난 후에 a와 b의 값은 모두 1씩 증가된 상태

	// 증감 연산자의 후위 표기는 다른 연산자와 함께 사용될 때 가장 나중에 연산됨

	// 주의 !!!!!!!!!!!!!!
	// 하나의 수식에서 같은 변수를 두 번 이상 사용할 때는 그 변수에 증감 연산자를 사용하면 안 됨.
	// ex: (++a) + a + (++a)  -->  이런 코드는 정답이 없으며, 절대 사용해서도 안 됨.

	return 0;
}