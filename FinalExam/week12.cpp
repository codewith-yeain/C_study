#include <iostream>
//using std::cout;
//using std::cin;
//using std::endl;

using namespace std;

inline double cube(const double side)
{
	return side * side * side;
}

int main()
{
	double sideValue;

	for (int i = 1; i <= 3; i++)
	{
		cout << "\nEnter the side length of your cube: ";
		cin >> sideValue;

		cout << "Volume of cube with side "
			<< sideValue << " is " << cube(sideValue) << endl;
		// inline�� ����ؼ� �� �ڸ����� �ٷ� ���ϰ��� ���� �� �ֱ� ������ �Լ� ȣ�Ⱚ ��� ����
	}
}