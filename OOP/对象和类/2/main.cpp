// ConsoleApplication2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "Stock0.h"

Stock *getobj(void);

int main()
{
	/*����һ������Stockʵ��������ʼ��ֵ����õ���һ��Stockʵ��������zhangsan����������ɻ��һ���ṹ�壬�����ǽṹ��ָ��*/
	/*Stock zhangsan = Stock("fujistu", 1000, 1000, 1000);*/

	/*��������ֱ�Ӵ���ʵ���������ȼ��ڷ���һ���Ƿ���һ�Ľ��հ�*/
	/*Stock zhangsan( "fujistu", 1000, 1000, 1000 );*/

	/*������������һ��Stockָ��pzhangsan����ʼ��һ������Stockʵ����pzhangsan������ʹ�õľ���ʵ����ָ��*/
	Stock *pzhangsan = new Stock( "fujistu", 1000, 1000, 1000 );

	int i;

	/*����һ*/
	/*zhangsan.show();*/

	/*������*/
	/*zhangsan.show();*/

	/*������*/
	pzhangsan->show();
	/*ʹ�÷��棬�ͽṹ��һ�£�ʵ���á�.����ָ���á�->��*/

	Stock *ptmp = getobj();	

	ptmp->show();

	std::cin >> i;

    return 0;
}

Stock *getobj(void)
{
	Stock *ptmp;
	Stock lisi("fujistu_1", 1000, 1000, 1000);
	ptmp = &lisi;						/*ʵ��һ��coredump,˵����new��������ջ��*/
	//ptmp =new Stock("fujistu_1", 1000, 1000, 1000);	/*ʵ������������������˵��new���������ڶ���*/

	return ptmp;
}
