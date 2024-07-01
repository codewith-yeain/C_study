#include <stdio.h>

void swap(double* pa, double* pb);		// 두 실수를 바꾸는 함수
void line_up(double* maxp, double* midp, double* minp);		// 함수 선언

int main(void)
{
	double max, mid, min;

	printf("실수값 3개 입력 : ");
	scanf_s("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("내림차순 정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", max, mid, min);

	return 0;
}

void swap(double* pa, double* pb)
{
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double* maxp, double* midp, double* minp)
{
	while (*minp > *maxp || *minp > *maxp || *midp > *maxp) {
		if (*minp > *midp) {
			swap(minp, midp);		// 주의: maxp, midp, minp가 애초에 포인터 변수이므로, & 붙인 필요 없음
		}
		else if (*minp > *maxp) {
			swap(minp, maxp);
		}
		else if (*midp > *maxp) {
			swap(midp, maxp);
		}
		else {
			printf("정렬이 모두 완료 되었습니다.\n");
			break;
		}
	}
	
}