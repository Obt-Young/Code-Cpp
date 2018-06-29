/* ˵����1.��������У�һ���ʽΪ����Ϊ����飬һ����public���εģ���һ����private���ε�
*		 2.OOP��˼���ǡ���ǰ�����ֻ�ṩ������ʹ�ã�������ֱ�ӷ��ʳ�Ա�����������һ�㶼�����г�Ա�����ŵ�private����
*		 3.��javaһ�����ڶ������ʱ�����ֱ�Ӱ�ʵ��Ҳһ�����ˣ�����һ�㲻������
*		 4.���ڶ����ʱ��һ�㶼�ǰѺ����������ڶ�������Ѻ���ʵ�ַŵ�����һ���ļ���(���̳���C���ԵĴ�ͳ����û�к�Javaһ��)
*		 5.���Ƿ���һ������public�У�Ҳ������һ��Ҫ����private�У�ֻ������һ�ֱ��ϰ��/����
*/


#ifndef _STOCK0_H_
#define _STOCK0_H_

#include <string>
#include <iostream>

class Stock
{
	/*�ӿ�*/
public:
	void acquire(const std::string & co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
	Stock(std::string co, long shares, double share_val, double total_val);
	~Stock();

	/*��*/
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	/*�������ඨ���ʱ��Ͷ��巽����ʵ�֣�������һ��Ҫ����ʵ����ʵ��*/
	void set_tot() { total_val = shares * share_val; }	
	void set_tot_tmp();

};

/*��������Ҳ���Է����ඨ������(ӡ֤�����´���һ���ļ�����д����ʵ��)�����ǣ�������Ҫ�ں�����ǰ���������(Stock)
  ���ﶨ�����������������Ϊ����.hͷ�ļ��У�ͷ�ļ����мɶ��庯��ʵ�֣���Ϊ��include��ʱ����ܻ�����ظ����壬��
  ��������ʵ�ֱȽ����⣬����ν*/
inline void Stock::set_tot_tmp() {
	std::cout << "do nothing\n";
}



#endif
