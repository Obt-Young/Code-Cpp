#include "mytime1.h"
#include <iostream>

Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int hours_, int minutes_)
{
	hours = hours_;
	minutes = minutes_;
}

void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}

void Time::AddHr(int h)
{
	hours += h;
}

void Time::Reset(int h, int m)
{
	hours = h;
	minutes = m;
}

Time Time::operator+(const Time & t) const
{	
	Time sum;	/*�����ָ����ʼֵ����ʹ��Ĭ�Ϲ�����*/
	std::cout << "xxxxx" << std::endl;
	sum.Show();
	std::cout << "xxxxx" << std::endl;

	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}

/*���ﷵ��ֵ���࣬��ͬ�ڽṹ�壬����԰�ֵ����*/
Time Time::Sum(const Time & t) const	/*��������ã�����ַ�ȴ�ֵ�ٶȸ��죬ʹ�õ��ڴ�Ҳ����*/
{
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}

void Time::Show() const
{
	std::cout << hours << "hours," << minutes << "minutes";
}











