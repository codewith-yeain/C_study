#include <stdio.h>

void main() {
	// 배열 속에는 타입에 해당하는 값만 넣을 수 있다.
	int ar[] = {10, 20, 30};

	printf("ar: %d\n", ar); // '시작' 주소값이 출력됨
	printf("ar + 1: %d\n", ar+1);
	printf("ar + 2: %d\n", ar+2);

	// *: 주소 앞에 쓰이면 '역참조연산자'로서 쓰인다.
	printf("*ar: %d\n", *ar);
	printf("*(ar + 1): %d\n", *(ar + 1));
	printf("*(ar + 2): %d\n", *(ar + 2));
	
	printf("ar[0]: %d\n", ar[0]);
	printf("ar[1]: %d\n", ar[1]);
	printf("ar[2]: %d\n", ar[2]);

	printf("ar[3]: %d\n", ar[3]);
	printf("ar[4]: %d\n", ar[4]); // 오류는 아니지만 쓰레기 값이 나온다.
}