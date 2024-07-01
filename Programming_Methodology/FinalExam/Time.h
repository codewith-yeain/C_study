#ifndef TIME_H
#define TIME_H // include guard

/*
class Time
{
public:
	Time();
	void setTime(int, int, int); // ���� �̸� ���ʿ�
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
	// �μ����� ���� ����Ʈ ������ �������ִ� �����ڸ� default constructor��� ��.

	void setTime(int, int, int); // ���� �̸� ���ʿ�
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