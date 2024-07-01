


include <iostream>
#include <stdexcept>
#include "Time.h"
using namespace std;

int main()
{
	Time t;

	cout << "The initial universal time is ";
	t.printUniversal();
	cout << "\nThe initial standard time is ";
	t.printStandard();

	t.setTime(13, 27, 6);

	cout << "\n\nUniversal time after setTime is ";
	t.printUniversal();
	cout << "\nStandard time after setTime is ";
	t.printStandard();

	try
	{
		t.setTime(99, 99, 99);
	}
	catch (invalid_argument& e) // e는 커스텀 에러 메시지
	{
		//cout << "Exception: " << e.what() << endl;
		cerr << "\n\nException while initializing t5: " << e.what() << endl;
	}

	// error catch 후에는 마지막으로 설정된 값이 출력되는 것을 볼 수있음
	cout << "\n\nAfter attempting invalid settings:"
		<< "\nUniversal time: ";
	t.printUniversal();
	cout << "\nStandard time: ";
	t.printStandard();
	cout << endl;
}
