#ifndef TIME_H
#define TIME_H // include guard

/*
class Time
{
public:
	Time();
	void setTime(int, int, int); // 변수 이름 불필요
	void printUniversal() const;
	void printStandard() const;
private:
	unsigned int hour;
	unsigned int minute;
	unsigned int second;
};
*/

class Time
{
public:
	explicit Time(int = 0, int = 0, int = 0); 
	// 인수들의 값을 디폴트 값으로 세팅해주는 생성자를 default constructor라고 함.

	void setTime(int, int, int); // 변수 이름 불필요
	void setHour(int);
	void setMinute(int);
	void setSecond(int);

	unsigned int getHour() const;
	unsigned int getMinute() const;
	unsigned int getSecond() const;

	void printUniversal() const;
	void printStandard() const;

private:
	unsigned int hour;
	unsigned int minute;
	unsigned int second;
};



endif