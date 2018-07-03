#pragma once

#ifndef _BRASS_H_
#define _BRASS_H_

#include <string>

/*******************************����*******************************/
class Brass {
private:
	std::string fullname;
	long acctNum;
	double balance;

public:
	/****************���캯��****************/
	/*����ͬʱ��ʼ��������һ�ּ򵥵���д��ʽ����Ը�Ч*/
	Brass(const std::string &fullname_ = "Nullbody", long acctNum_ = -1, double balance_ = 0.0);
	

	/*�麯����Ҫ�����ָ����˵����ʹ�ã�
		���ĳ���������麯������ôͨ����ָ������á������÷�������ô��ָ��ָ���ʵ��Ϊ׼
		���ĳ�����������麯������ôͨ����ָ������á������÷�������ô��ָ������Ϊ׼
	*/


	/****************��Ա����****************/
	void Depoit(double amt);
	virtual void Withdraw(double amt);	/*�麯��*/
	virtual void ViewAcct()const;		/*�麯��*/

	virtual void ViewAcct_isV()const;	/*�麯��������չ��ͬ��*/
	void ViewAcct_notV()const;			/*���麯��������չ��ͬ��*/

	double Balance()const;

	/****************��������****************/
	virtual ~Brass() {};				/*�麯������������Ϊ��ȷ���ͷ���������ʱ������ȷ��˳�������������*/
};

/*******************************������*******************************/
class BrassPlus : public Brass {
private:
	double maxLoan;
	double rate;
	double owesBank;

public:
	/*********���캯��*********/
	BrassPlus(const std::string &fullname_ = "NullBody", long acctNum_ = -1, double balance_ = 0.0,
		double maxLoan = 500, double rate = 0.11125);
	BrassPlus(const Brass &brass,double maxLoad_=500,double rate_=0.11125);

	/*********��Ա����*********/
	virtual void ViewAcct()const;		/*�ͻ���ĺ���ͬ��ͬ��*/
	virtual void Withdraw(double amt);	/*�ͻ���ĺ���ͬ��ͬ��*/

	virtual void ViewAcct_isV()const;	/*�麯��������չ��ͬ��*/
	void ViewAcct_notV()const;			/*�ͻ���ͬ���ķ��麯��*/

	void ResetMax(double m) { maxLoan = m; };
	void ResetRate(double r) { rate = r; };
	void ResetOwes() { owesBank = 0; };


};



#endif