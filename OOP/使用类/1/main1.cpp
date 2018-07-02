// ConsoleApplication4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "mytime1.h"
#include <iostream>


int main()
{
	using std::cout;
	using std::endl;
	using std::cin;

	Time planning;
	Time coding(2,40);
	Time fixing(5,55);
	Time total;

	cout << "planning time  =  ";
	planning.Show();
	cout << endl;

	cout << "coding time = ";
	planning.Show();
	cout << endl;

	cout << "fixing time = ";
	planning.Show();
	cout << endl;

	total = coding.Sum(fixing);
	cout << "coding.Sum(fixing) = ";
	total.Show();
	cout << endl;

	/*��һ�ֵ��÷������͵��ó�Ա����һ��*/
	total = coding.operator+(fixing);
	total.Show();
	cout << endl;
	/*�ڶ��ֵ��÷�������ʹ�üӺ�һ��*/
	total = coding + fixing;
	total.Show();
	cout << endl;

	int tp;
	cin >> tp;

    return 0;
}

