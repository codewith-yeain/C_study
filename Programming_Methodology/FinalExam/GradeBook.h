


include <iostream>
#include <string>

// 헤더에서는 using 사용 불가.

class GradeBook
{
public:
	// 생성자
	explicit GradeBook(std::string name) // explicit은 single parameter를 의미
		: courseName(name)	// 초기화
	{

	}	// end GradeBook constructor

	void setCourseName(std::string name) // 변화시켜야하므로 const가 아님. 검증도 안함
	{
		courseName = name;
			// 클래스의 data member이기 때문에 클래스를 선언하지 않아도 class's member functions에서는 접근 가능함
	}

	std::string getCourseName() const // 변화시키지 않으므로 const
	{
		return courseName;
	}

	void displayMessage() const
	{
		std::cout << "Welcome to the grade book for\n" << getCourseName() << "!" << std::endl;
	}


	private:	// 선언되어있는 클래스의 member functions로만 접근이 가능하다. (캡슐화 !!!!!!!!!)
		//class member의 디폴트 접근은 private.
		std::string courseName; // 이 클래스의 data member
	};