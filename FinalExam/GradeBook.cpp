#include <iostream>
#include "GradeBook2.h"
using namespace std;

// implementation
GradeBook::GradeBook(string name)
//	: courseName(name)
{
	setCourseName(name); // 바로 초기화 시키지 않고, 유효성 검사를 거치게 됨
}

// validating(유효성 검사)
void GradeBook::setCourseName(string name)
{
	if (name.size() <= 25) // (.)을 써서 함수를 사용하는 것으로 보아 String 클래스의 객체 name인 것을 알 수 있음.
		courseName = name;

	if (name.size() > 25)
	{
		courseName = name.substr(0, 25); // 0 인덱스부터 25개를 잘라내라

		cerr << "Name \"" << name << "\" exceeds maximum length (25).\n"
			<< "Limiting courseName to first 25 characters.\n" << endl;
	}
}

string GradeBook::getCourseName() const
{
	return courseName;
}

void GradeBook::displayMesssage() const
{
	cout << "Welcome to the grade book for\n" << getCourseName()
		<< "!" << endl;
}