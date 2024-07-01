

include <string>

// Interface
class GradeBook
{
public:
	explicit GradeBook(std::string);
	void setCourseName(std::string);
	std::string getCourseName() const;
	void displayMesssage() const;
private:
	std::string courseName;
};