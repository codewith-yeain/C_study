


include <iostream>
#include <string>

// ��������� using ��� �Ұ�.

class GradeBook
{
public:
	// ������
	explicit GradeBook(std::string name) // explicit�� single parameter�� �ǹ�
		: courseName(name)	// �ʱ�ȭ
	{

	}	// end GradeBook constructor

	void setCourseName(std::string name) // ��ȭ���Ѿ��ϹǷ� const�� �ƴ�. ������ ����
	{
		courseName = name;
			// Ŭ������ data member�̱� ������ Ŭ������ �������� �ʾƵ� class's member functions������ ���� ������
	}

	std::string getCourseName() const // ��ȭ��Ű�� �����Ƿ� const
	{
		return courseName;
	}

	void displayMessage() const
	{
		std::cout << "Welcome to the grade book for\n" << getCourseName() << "!" << std::endl;
	}


	private:	// ����Ǿ��ִ� Ŭ������ member functions�θ� ������ �����ϴ�. (ĸ��ȭ !!!!!!!!!)
		//class member�� ����Ʈ ������ private.
		std::string courseName; // �� Ŭ������ data member
	};