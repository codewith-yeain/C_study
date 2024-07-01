#include <stdio.h>

int main(void)
{
	// 체중관리 프로그램
	double height, weight, bmi;
	
	printf("몸무게(kg)와 키(cm) 입력 :");
	scanf_s("%lf%lf", &weight, &height);
	height = height/100; // 185.6cm -> 1.856m
	printf("%lf\n", height);
	bmi = weight / (height * height);

	printf("BMI: %.1lf\n", bmi);
	((bmi >= 20.0) && (bmi < 25.0)) ? printf("표준입니다\n") : printf("체중관리가 필요합니다\n");

	return 0;

}