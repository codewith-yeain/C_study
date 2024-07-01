
include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"

using namespace std;

/*
Time::Time()
	: hour(0), minute(0), second(0) // 한 번에 초기화
{
}

void Time::setTime(int h, int m, int s)
{
	// 유효성 검사
	if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60))
	{
		hour = h;
		minute = m;
		second = s;
	}
	else
		throw invalid_argument( // 생성자 !!!! 예외 발생시킴. invalid_argument라는 "타입"이다. <stdexcept>에서 왔음
			"hour, minute and/or second was out of range");
}
void Time::printUniversal() const // print Time format (HH:MM:SS)
{
	cout << setfill('0') << setw(2) << hour << ":"
		<< setw(2) << minute << ":" << setw(2) << second;

	// <iomanip>

		// - setfill : 빈칸이 생기면 왼쪽에 0을 fill한다.
		//			한 번의 호출로 뒤에까지 유지됨. => sticky setting 성질
		// - setw : 얼만큼 채울지 정하는 함수, sticky setting 아님. nonsticky setting
	
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
	setTime(hour, minute, second); // 생성자 인수가 없다면 0으로 초기화, 그 외 값은 setTime 호출을 통해 데이터 값 세팅
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

		// - setfill : 빈칸이 생기면 왼쪽에 0을 fill한다.
		//			한 번의 호출로 뒤에까지 유지됨. => sticky setting 성질
		// - setw : 얼만큼 채울지 정하는 함수, sticky setting 아님. nonsticky setting

}

void Time::printStandard() const
{
	cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
		<< setfill('0') << setw(2) << minute << ":" << setw(2)
		<< second << (hour < 12 ? " AM" : " PM");
}


