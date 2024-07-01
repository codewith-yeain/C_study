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
		// inline을 사용해서 그 자리에서 바로 리턴값을 받을 수 있기 때문에 함수 호출값 사용 가능
	}
}