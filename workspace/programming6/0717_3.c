#include <stdio.h>

void main() {

	//for (int num = 0; num < 5; num++) {
	//	printf("%d\n", num);

	//	for (int i = 0; i < 5; i++) {
	//		printf("%d ", i);
	//	}
	//	printf("\n");
	//}

	/*printf("2�� ~ 9�ܱ����� �������� ����ϴ� ���α׷��Դϴ�.\n");
	for (int num = 2; num <= 9; num++) {
		printf("\n---------%d��---------\n", num);
		for (int i = 1; i <= 9; i++) {
			printf("%d * %d = %d\n", num, i, num * i);
		}
		printf("---------------------\n");
	}*/

	// A B C D E F
	// �� �� ����� ��µǵ��� �ϱ�!

	for (int i = 0; i < 6; i++) {
		printf("%c ", i + 65);
	}

	printf("\n");

	// A B D E F
	// �� �� ����� ��µǵ��� �ϱ�!

	// 1. ���׿�����
	for (int i = 0; i < 5; i++) {
		int eng = i >= 2 ? i + 66 : i + 65;
		printf("%c ", eng);
	}

	printf("\n");

	// 2. if��
	for (int i = 0; i < 5; i++) {
		int eng;
		if (i >= 2) {
			eng = i + 66;
		}
		else {
			eng = i + 65;
		}
		printf("%c ", eng);
	}
}