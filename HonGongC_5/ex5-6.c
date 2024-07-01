#include <stdio.h>

int main(void)
{
	// switch ~ case 문
	// case와 default는 건너뛸 위치를 표시하는 레이블의 역할
	// 만약 break가 없다면, 참인 case에서 그 뒤 case도 쭉 실행됨
	int rank = 2, m = 0;

	switch (rank)
	{
	case 1:
		m = 300;
		break;
	case 2:
		m = 200;
		break;
	case 3:
		m = 100;
		break;
	default:
		m = 10;
		break;
	}
}