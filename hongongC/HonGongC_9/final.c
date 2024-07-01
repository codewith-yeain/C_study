#include <stdio.h>

void swap(double* pa, double* pb);		// �� �Ǽ��� �ٲٴ� �Լ�
void line_up(double* maxp, double* midp, double* minp);		// �Լ� ����

int main(void)
{
	double max, mid, min;

	printf("�Ǽ��� 3�� �Է� : ");
	scanf_s("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("�������� ���ĵ� �� ��� : %.1lf, %.1lf, %.1lf\n", max, mid, min);

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
			swap(minp, midp);		// ����: maxp, midp, minp�� ���ʿ� ������ �����̹Ƿ�, & ���� �ʿ� ����
		}
		else if (*minp > *maxp) {
			swap(minp, maxp);
		}
		else if (*midp > *maxp) {
			swap(midp, maxp);
		}
		else {
			printf("������ ��� �Ϸ� �Ǿ����ϴ�.\n");
			break;
		}
	}
	
}