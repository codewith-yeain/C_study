#include <stdio.h>

int main(void) 
{
	// char형 변수의 사용
	char ch1 = 'A';
	char ch2 = 65;
	int ch3 = 65;

	printf("문자 %c의 아스키 코드 값 : %d\n", ch1, ch1);

	// 변수형이 char이든, int이든 변환문자 %d와 %c 둘다 사용이 가능하다.
	printf("char로 저장된, 아스키 코드 값이 %d인 문자 : %c\n", ch2, ch2);
	printf("int로 저장된, 아스키 코드 값이 %d인 문자 : %c\n", ch3, ch3);

	// 여러 가지 정수형 변수
	short sh = 32767;
	int in = 2147483647;
	long ln = 2147483647;
	long long lln = 123451234512345;

	printf("short형 변수 출력: %d\n", sh);
	printf("int형 변수 출력: %d\n", in);
	printf("long형 변수 출력: %ld\n", ln); // long 타입 변환 문자 %ld
	printf("long long형 변수 출력: %lld\n", lln); // long long 타입 변환 문자 %lld
	
	return 0;
}