#include <stdio.h>

void main() {
	// �迭 �ӿ��� Ÿ�Կ� �ش��ϴ� ���� ���� �� �ִ�.
	int ar[] = {10, 20, 30};

	printf("ar: %d\n", ar); // '����' �ּҰ��� ��µ�
	printf("ar + 1: %d\n", ar+1);
	printf("ar + 2: %d\n", ar+2);

	// *: �ּ� �տ� ���̸� '������������'�μ� ���δ�.
	printf("*ar: %d\n", *ar);
	printf("*(ar + 1): %d\n", *(ar + 1));
	printf("*(ar + 2): %d\n", *(ar + 2));
	
	printf("ar[0]: %d\n", ar[0]);
	printf("ar[1]: %d\n", ar[1]);
	printf("ar[2]: %d\n", ar[2]);

	printf("ar[3]: %d\n", ar[3]);
	printf("ar[4]: %d\n", ar[4]); // ������ �ƴ����� ������ ���� ���´�.
}