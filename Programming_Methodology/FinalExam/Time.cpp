
include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"

using namespace std;

/*
Time::Time()
	: hour(0), minute(0), second(0) // �� ���� �ʱ�ȭ
{
}

void Time::setTime(int h, int m, int s)
{
	// ��ȿ�� �˻�
	if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60))
	{
		hour = h;
		minute = m;
		second = s;
	}
	else
		throw invalid_argument( // ������ !!!! ���� �߻���Ŵ. invalid_argument��� "Ÿ��"�̴�. <stdexcept>���� ����
			"hour, minute and/or second was out of range");
}
void Time::printUniversal() const // print Time format (HH:MM:SS)
{
	cout << setfill('0') << setw(2) << hour << ":"
		<< setw(2) << minute << ":" << setw(2) << second;

	// <iomanip>

		// - setfill : ��ĭ�� ����� ���ʿ� 0�� fill�Ѵ�.
		//			�� ���� ȣ��� �ڿ����� ������. => sticky setting ����
		// - setw : ��ŭ ä���� ���ϴ� �Լ�, sticky setting �ƴ�. nonsticky setting
	
}

void Time::printStandard() const
{
	cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
		<< setfill('0') << setw(2) << minute << ":" << setw(2)
		<< second << (hour < 12 ? " AM" : " PM");
}
*/

Time::Time(int hour, int minute, int second)
{
	setTime(hour, minute, second); // ������ �μ��� ���ٸ� 0���� �ʱ�ȭ, �� �� ���� setTime ȣ���� ���� ������ �� ����
}

void Time::setTime(int h, int m, int s)
{
	setHour(h);
	setMinute(m);
	setSecond(s);
}

void Time::setHour(int h)
{
	if (h >= 0 && h < 24)
		hour = h;
	else
		throw invalid_argument("hour must be 0-23");
}

void Time::setMinute(int m)
{
	if (m >= 0 && m < 60)
		minute = m;
	else
		throw invalid_argument("minute must be 0-59");
}

void Time::setSecond(int s)
{
	if (s >= 0 && s < 60)
		second = s;
	else
		throw invalid_argument("second must be 0-59");
}

unsigned int Time::getHour() const
{
	return hour;
}

unsigned Time::getMinute() const
{
	return minute;
}

unsigned Time::getSecond() const
{
	return second;
}

void Time::printUniversal() const // print Time format (HH:MM:SS)
{
	cout << setfill('0') << setw(2) << hour << ":"
		<< setw(2) << minute << ":" << setw(2) << second;

	// <iomanip>

		// - setfill : ��ĭ�� ����� ���ʿ� 0�� fill�Ѵ�.
		//			�� ���� ȣ��� �ڿ����� ������. => sticky setting ����
		// - setw : ��ŭ ä���� ���ϴ� �Լ�, sticky setting �ƴ�. nonsticky setting

}

void Time::printStandard() const
{
	cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
		<< setfill('0') << setw(2) << minute << ":" << setw(2)
		<< second << (hour < 12 ? " AM" : " PM");
}


