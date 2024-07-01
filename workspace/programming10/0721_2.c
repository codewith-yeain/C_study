#include <stdio.h>

int global = 0;

void f() {
	// 스태틱변수
	// 사용 가능한 영역은 지역변수와 동일하지만
	// 메모리에서의 해제는 프로그램이 종료된 후이다.

	static int a = 0;
	int b = 0;

	a++;
	b++;
	printf("a: %d, b: %d\n", a, b);
}

void f2() {
	printf("전역 변수 global: %d\n", global);
}

void f3(int num) {
	num = 100;
	printf("f3 내부의 num의 값: %d\n", num);
}

void main() {
	f();
	f();

	f2();
	global = 500;
	printf("전역 변수 global: %d\n", global);

	int num = 10;
	f3(num);
	printf("main 내부의 num의 값: %d\n", num);

}