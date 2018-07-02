#pragma once

#ifndef _MYTIME_H_
#define _MYTIME_H_

class Time {
private:
	int hours;
	int minutes;

public:
	Time();
	Time(int hours_, int minutes_);
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);	/*����*/
	/*����β����const��ʾ:��ǰ�������ܹ��޸ı���ĳ�Ա����*/
	/*���������������������޸ı�ʵ���ĳ�Ա���������������µĳ�Ա����ֵ��������ʱʵ���з���*/
	Time operator+(const Time & t) const;	
	Time Sum(const Time & t) const;
	void Show() const;


};

#endif
