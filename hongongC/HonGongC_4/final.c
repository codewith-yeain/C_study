#include <stdio.h>

int main(void)
{
	// ü�߰��� ���α׷�
	double height, weight, bmi;
	
	printf("������(kg)�� Ű(cm) �Է� :");
	scanf_s("%lf%lf", &weight, &height);
	height = height/100; // 185.6cm -> 1.856m
	printf("%lf\n", height);
	bmi = weight / (height * height);

	printf("BMI: %.1lf\n", bmi);
	((bmi >= 20.0) && (bmi < 25.0)) ? printf("ǥ���Դϴ�\n") : printf("ü�߰����� �ʿ��մϴ�\n");

	return 0;

}