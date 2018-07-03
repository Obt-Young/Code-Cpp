#include "stdafx.h"
#include "brass.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

typedef std::ios_base::fmtflags format;
typedef	std::streamsize precis;
format setFormat();
void restore(format f,precis p);

/*******************************����*******************************/
/************���캯��************/
Brass::Brass(const std::string &fullname_, long acctNum_, double balance_) {
	fullname = fullname_;
	acctNum = acctNum_;
	balance = balance_;
}
/************��Ա����************/
void Brass::Depoit(double amt) {
	if (amt < 0) {
		cout << "Negative deposit not allowed; "
			<< "deposit is cancelled ";
	}
	else {
		balance += amt;
	}
}

void Brass::Withdraw(double amt) {
	format initialState = setFormat();
	precis prec = cout.precision(2);

	if (amt < 0)
	{
		cout << "Withdraw amout must be positive;"
			<< "withdraw canceled;";
	}
	else if (amt <= balance)
		balance -= amt;
	else
	{
		cout << "Withdraw amount of $" << amt
			<< "withdraw canceled;";
	}
	restore(initialState, prec);
}

double Brass::Balance() const {
	return balance;
}

/*�麯����ʵ���ǲ���Ҫ��virtual�ؼ���*/
void Brass::ViewAcct() const {
	format initialState = setFormat();
	precis prec = cout.precision(2);

	cout << "Client: " << fullname << endl;
	cout << "Account Number: " << acctNum << endl;
	cout << "Balance: $" << balance << endl;
	restore(initialState, prec);
}


void Brass::ViewAcct_isV()const {
	cout << "Brass" << endl;
}
void Brass::ViewAcct_notV()const {
	cout << "Brass" << endl;
}



/*******************************������*******************************/
/************���캯��************/
BrassPlus::BrassPlus(const std::string &fullname_, long acctNum_, double balance_, double maxLoan_, double rate_)
	:Brass(fullname_, acctNum_, balance_) 
{
	maxLoan = maxLoan_;
	owesBank = 0.0; /*�����Ա����һֱû�ڹ��캯���и�ֵ�����Ҳ���Ҫ��紫ֵ����*/
	rate = rate_;
}

/*Brass�в�û����Brass(cosnt Brass &ptr)�����Ĺ����壬���������õ��ˣ����������ʽ���������塱�������12��*/
BrassPlus::BrassPlus(const Brass & ptr, double maxLoan_,double rate_) 
	:Brass(ptr)
{
	maxLoan = maxLoan_;
	rate = rate_;
	owesBank = 0.0;
}

/************��Ա����************/
/*��Brass��ͬ��ͬ�κ������ڲ�ʵ����ȫ��ͬ*/
void BrassPlus::ViewAcct() const{
	format initialStat = setFormat();
	precis prec = cout.precision(2);

	Brass::ViewAcct();			/*ʹ�û����public����������Ҫ����ʵ����ֱ�ӡ�����::���������ɡ�*/
	cout << "Maximum loan: $" << maxLoan << endl;
	cout << "owe to bank : $" << owesBank << endl;
	cout.precision(3);
	cout << "Loan Rate : " << 100 * rate << "%\n";
	restore(initialStat, prec);
}

/*�麯������麯���ıȽ�*/
void BrassPlus::ViewAcct_isV()const {
	cout << "BrassPlus" << endl;
};
void BrassPlus::ViewAcct_notV()const {
	cout << "BrassPlus" << endl;
}

void BrassPlus::Withdraw(double amt) {
	format initialState = setFormat();
	precis prec = cout.precision(2);

	double bal = Balance();
	if (amt <= bal)
		Brass::Withdraw(amt); /*ʹ�û����public����������Ҫ����ʵ����ֱ�ӡ�����::���������ɡ�*/
	else if (amt <= bal + maxLoan - owesBank);
	{
		double advance = amt + bal;
		owesBank += advance*(1.0 + rate);
		cout << "Bank advance: $" << advance << endl;
		cout << "Fiance charge : $" << advance*rate << endl;
		Depoit(advance);
		Brass::Withdraw(amt);
	}
	restore(initialState, prec);
}

format setFormat() {
	return cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
}

void restore(format f, precis p)
{
	cout.setf(f, std::ios_base::floatfield);
	cout.precision(p);
}




