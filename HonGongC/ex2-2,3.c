#include <stdio.h>

int main(void) 
{
	// printf: ���ڿ��� ����ϴ� �Լ�. print formatted��� ���� ����
	printf("Be happy"); 
	printf("My friend");
	// ��°��: Be happyMy friend -> ����� ��� �ʿ�

	printf("\nBe happy\n");
	printf("My friend\n");

	// \b(�齺���̽�, backspace): �� ĭ �������� �̵�
	printf("Goot\bd\tchance\n");

	// \r(ĳ���� ����, carriage return): �� ������ �̵�
	// \a(�˷� �溸, alert): ���Ҹ�
	printf("Cow\rW\a\n");


	return 0;
}