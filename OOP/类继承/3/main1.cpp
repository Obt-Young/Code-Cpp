// ConsoleApplication6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "brass.h"
#include <iostream>

int main()
{
	using std::cout;
	using std::endl;

	Brass *p_P;
	BrassPlus *p_H;

	Brass Piggy("yk",382199,4000.00);
	BrassPlus Hoggy("ykk",382288,3000.00);


	p_P = &Hoggy;	/*����ָ��ָ����չ��*/
	p_P->ViewAcct_isV();	/*��ΪViewAcct���麯����		���Ը���ʵ���ߣ���ô�������Hoggy��ViewAcct_isV   ,  ��BrassPlus*/
	p_P->ViewAcct_notV();   /*��ΪViewAcct_notV�Ƿ��麯���� ���Ը���ָ���ߣ���ô�������piggy��ViewAcct_notV  �� ��Brass*/


	int tmp;
	std:: cin >> tmp;

    return 0;
}

