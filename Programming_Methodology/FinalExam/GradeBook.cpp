#include <iostream>
#include "GradeBook2.h"
using namespace std;

// implementation
GradeBook::GradeBook(string name)
//	: courseName(name)
{
	setCourseName(name); // �ٷ� �ʱ�ȭ ��Ű�� �ʰ�, ��ȿ�� �˻縦 ��ġ�� ��
}

// validating(��ȿ�� �˻�)
void GradeBook::setCourseName(string name)
{
	if (name.size() <= 25) // (.)�� �Ἥ �Լ��� ����ϴ� ������ ���� String Ŭ������ ��ü name�� ���� �� �� ����.
		courseName = name;

	if (name.size() > 25)
	{
		courseName = name.substr(0, 25); // 0 �ε������� 25���� �߶󳻶�

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