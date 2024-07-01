// grade-book class

#include <iostream>
#include <string>
using namespace std;

// Class definition: 클래스는 대문자로 시작해야 함

// 1 ===============================================================================
/*
	class GradeBook
	{
	public: // access specifier 키워드. 접근 범위를 나타내는 키워드. 다른 클래스의 멤버 함수에서도 사용 가능
		// member function: const 키워드가 있는 함수는 이 함수를 호출함으로써 GradeBook 객체를 수정하지 않는다는 것을 의미
		void displayMessgae() const // function header! 세미콜론 없음 주의
			// pascal case / camel case capitalization
		{
			cout << "Welocome to the Grade Book!" << endl;
		}
	}; // 세미콜론으로 끝난다!

	int main()
	{
		GradeBook myGradeBook;
		myGradeBook.displayMessgae(); // 객체를 달고 함수 호출. dot operator(.)
	}
*/

// 2 ===============================================================================
/*
	class GradeBook
	{
	public:
		void displayMessage(string courseName) const
		{
			cout << "Welcome to the grade book for\n" << courseName << "!" << endl;
		}
	};

	int main()
	{
		string nameOfCourse;
		GradeBook myGradeBook;

		cout << "Plaease enter the course name: " << endl;
		getline(cin, nameOfCourse); // 사용자가 입력한 것을 변수에 할당
		cout << endl;

		myGradeBook.displayMessage(nameOfCourse);
	}
*/

// 3 ===============================================================================
/*
	class GradeBook
	{
	public:
		void displayMessage(string courseName) const
		{
			cout << "Welcome to the grade book for\n" << courseName << "!" << endl;
		}
	};

	int main()
	{
		string nameOfCourse;
		GradeBook myGradeBook;

		cout << "Plaease enter the course name: " << endl;
		getline(cin, nameOfCourse); // 사용자가 입력한 것을 변수에 할당.
									// 공백이 포함된 문장이므로 cin을 사용하면 첫번째 단어만 받아들여짐
		cout << endl;

		myGradeBook.displayMessage(nameOfCourse);
	}
*/

// 4 ===============================================================================
/*
	class GradeBook
	{
	public:
		void setCourseName( string name ) // 변화시켜야하므로 const가 아님. 검증도 안함
		{
			courseName = name
			// 클래스의 data member이기 때문에 클래스를 선언하지 않아도 class's member functions에서는 접근 가능함
		}

		string getCourseName() const // 변화시키지 않으므로 const
		{
			return courseName;
		}

		void displayMessage() const
		{
			cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
		}
	};

	private:	// 선언되어있는 클래스의 member functions로만 접근이 가능하다. (캡슐화 !!!!!!!!!)
					class member의 디폴트 접근은 private.
		string courseName; // 이 클래스의 data member
	};

	int main()
	{
		string nameOfCourse;
		GradeBook myGradeBook;

		cout << "Initial couse name is: " << myGradeBook.getCourseName() << endl;
		
		cout << "\nPlease enter the course name: " << endl;
		getline( cin, nameOfCourse );
		myGradeBook.setCourseName( nameOfCourse );

		cout << endl;
		myGradeBook.displayMessage();
	}
*/

// 5 ===============================================================================
/*
	class GradeBook
	{
	public:
		// 생성자
		explicit GradeBook( string name ) // explicit은 single parameter를 의미
			: courseName( name )	// 초기화
		{

		}	// end GradeBook constructor

		void setCourseName( string name ) // 변화시켜야하므로 const가 아님. 검증도 안함
		{
			courseName = name;
			// 클래스의 data member이기 때문에 클래스를 선언하지 않아도 class's member functions에서는 접근 가능함
		}

		string getCourseName() const // 변화시키지 않으므로 const
		{
			return courseName;
		}

		void displayMessage() const
		{
			cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
		}

	private:	// 선언되어있는 클래스의 member functions로만 접근이 가능하다. (캡슐화 !!!!!!!!!)
					//class member의 디폴트 접근은 private.
		string courseName; // 이 클래스의 data member
	};

	int main()
	{
		GradeBook gradeBook1( "CS101 Introduction to C++ Programming" );
		GradeBook gradeBook2( "CS102 Data Structures in C++" );

		cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
			<< "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
			<< endl;
	}
*/

// 6 ===============================================================================
/*
	* 이렇게 소스코드와 헤더파일을 분리해 사용할때 소스코드이 메인함수 안의 코드들을 driver program이라고 함
	* 소스코드와 헤더 파일은 같은 경로에 있어야 함
	* 헤더에서는 using을 사용 못함
	* 여기는 client code인 것
	* 
	* 
#include "GradeBook.h" // Interface만 include
	int main()
	{
		GradeBook gradeBook1("CS101 Introduction to C++ Programming");
		GradeBook gradeBook2("CS102 Data Structures in C++");

		cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
			<< "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
			<< endl;
	}

*/

