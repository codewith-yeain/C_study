// grade-book class

#include <iostream>
#include <string>
using namespace std;

// Class definition: Ŭ������ �빮�ڷ� �����ؾ� ��

// 1 ===============================================================================
/*
	class GradeBook
	{
	public: // access specifier Ű����. ���� ������ ��Ÿ���� Ű����. �ٸ� Ŭ������ ��� �Լ������� ��� ����
		// member function: const Ű���尡 �ִ� �Լ��� �� �Լ��� ȣ�������ν� GradeBook ��ü�� �������� �ʴ´ٴ� ���� �ǹ�
		void displayMessgae() const // function header! �����ݷ� ���� ����
			// pascal case / camel case capitalization
		{
			cout << "Welocome to the Grade Book!" << endl;
		}
	}; // �����ݷ����� ������!

	int main()
	{
		GradeBook myGradeBook;
		myGradeBook.displayMessgae(); // ��ü�� �ް� �Լ� ȣ��. dot operator(.)
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
		getline(cin, nameOfCourse); // ����ڰ� �Է��� ���� ������ �Ҵ�
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
		getline(cin, nameOfCourse); // ����ڰ� �Է��� ���� ������ �Ҵ�.
									// ������ ���Ե� �����̹Ƿ� cin�� ����ϸ� ù��° �ܾ �޾Ƶ鿩��
		cout << endl;

		myGradeBook.displayMessage(nameOfCourse);
	}
*/

// 4 ===============================================================================
/*
	class GradeBook
	{
	public:
		void setCourseName( string name ) // ��ȭ���Ѿ��ϹǷ� const�� �ƴ�. ������ ����
		{
			courseName = name
			// Ŭ������ data member�̱� ������ Ŭ������ �������� �ʾƵ� class's member functions������ ���� ������
		}

		string getCourseName() const // ��ȭ��Ű�� �����Ƿ� const
		{
			return courseName;
		}

		void displayMessage() const
		{
			cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
		}
	};

	private:	// ����Ǿ��ִ� Ŭ������ member functions�θ� ������ �����ϴ�. (ĸ��ȭ !!!!!!!!!)
					class member�� ����Ʈ ������ private.
		string courseName; // �� Ŭ������ data member
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
		// ������
		explicit GradeBook( string name ) // explicit�� single parameter�� �ǹ�
			: courseName( name )	// �ʱ�ȭ
		{

		}	// end GradeBook constructor

		void setCourseName( string name ) // ��ȭ���Ѿ��ϹǷ� const�� �ƴ�. ������ ����
		{
			courseName = name;
			// Ŭ������ data member�̱� ������ Ŭ������ �������� �ʾƵ� class's member functions������ ���� ������
		}

		string getCourseName() const // ��ȭ��Ű�� �����Ƿ� const
		{
			return courseName;
		}

		void displayMessage() const
		{
			cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
		}

	private:	// ����Ǿ��ִ� Ŭ������ member functions�θ� ������ �����ϴ�. (ĸ��ȭ !!!!!!!!!)
					//class member�� ����Ʈ ������ private.
		string courseName; // �� Ŭ������ data member
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
	* �̷��� �ҽ��ڵ�� ��������� �и��� ����Ҷ� �ҽ��ڵ��� �����Լ� ���� �ڵ���� driver program�̶�� ��
	* �ҽ��ڵ�� ��� ������ ���� ��ο� �־�� ��
	* ��������� using�� ��� ����
	* ����� client code�� ��
	* 
	* 
#include "GradeBook.h" // Interface�� include
	int main()
	{
		GradeBook gradeBook1("CS101 Introduction to C++ Programming");
		GradeBook gradeBook2("CS102 Data Structures in C++");

		cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
			<< "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
			<< endl;
	}

*/

