// ConsoleApplication5.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include "tabtenn1.h"

int main()
{
	using std::cout;
	using std::endl;
	using std::cin;

	/*ע�⣺���ù��캯��RatedPlayer��TableTennisPlayerʱ�������ǳ��ַ�������ô��ͷ�����Ҫ���캯���Ĳ����б�ҲҪ�ǳ��ַ�������const string &����
			������캯���Ĳ����б���string ���ͣ���ô�����ù��캯����ʱ�򣬾���Ҫ��stringʵ��������
			TableTennisPlayer(string firstname_,string lastname_,bool hasTable_)
				�ȼ���
			string firstname = "Tara";
			string lastname = "Boomdea";
			TableTennisPlayer(firstname,lastname,false);
	*/

	/*�ص㣺��DEMO��ʾ����ζ�������г�ʼ��(���ù��캯��)
		    Ĭ������£���������Ĺ��캯��ֻ��ʹ�û����Ĭ�Ϲ��캯����ΪΨһѡ��(�𲽸��ٿ��Կ�����Ȼ��������Ӧ�Ĺ��죬����ֵȴû�иı䣬��Ƚ���֣���֪����
			�����������⣬����c++�����������)
			�����ָ�����û����ĳ�����캯������ô����Ҫʹ�á���ʼ�����б��﷨���������캯����#3 �� #4
	*/

	/*ʹ��ʵ�������Ǹ����췽��*/
	RatedPlayer player1 = RatedPlayer("Mallory", "Duck", true, 2);
	/*ʹ�ô����õ��Ǹ����췽��*/
	TableTennisPlayer & refplayer2 = TableTennisPlayer("Tara", "Boomdea", true);
	RatedPlayer rplayer2 = RatedPlayer(refplayer2, 1);

	cout << "xxx" << endl;
	player1.Name();
	player1.HasTable();
	player1.Rating();
	cout << endl;

	cout << "xxx" << endl;
	rplayer2.Name();
	rplayer2.HasTable();
	rplayer2.Rating();
	cout << endl;

	int tmp;
	cin >> tmp;

    return 0;
}

