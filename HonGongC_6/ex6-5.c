#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i <= 10; i++)
	{
		sum += i;
		if (sum > 30) break;
	}

	// break 사용 시 주의할 점
	// 1. break는 자신을 포함하는 반복문 하나만 벗어난다
	// 
	// 2. 반복문이 중첩된 경우 가장 안쪽에서 break를 사용해 모든 반복문을 한 번에 벗어날 수 없다
	// 
	// 3. 또한 반복문 이외의 블록에서 사용하면 그 블록을 포함한 반복문을 벗어난다
	// 예를 들어 while 반복문 안에 있는 if문 블록에서 break를 사용하면 if문 블록을 포함한 while 반복문을 벗어난다
	// 
	// 4. 다만, if문과 달리 switch ~ case문의 블록 안에서 break를 사용하면 switch ~ case 블록만 벗어난다.


	printf("누적한 값 : %d\n", sum);
	printf("마지막으로 더한 값 : %d", i);

	return 0;

}