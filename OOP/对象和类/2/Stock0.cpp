#include "Stock0.h"
#include <iostream>

void Stock::acquire(const std::string & co, long n, double pr) {
	company = co;
	if (n < 0)
	{
		std::cout << "Number of shares can not be negative;"
			<< company << "share set  to 0 \n";
		shares = 0;
	}
	else
		shares = n;	//�������崦ʹ����Stock::�����Σ��ʹ��������ڲ�����ֱ������Stock�ĳ�Ա����
	share_val = pr;
	set_tot();

}

void Stock::buy(long num, double price) {
	if (num < 0)
	{
		std::cout << "Number of shares purchased can not be negative;"
			<< "Transaction is aborted. \n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price) {
	using std::cout;
	if (num < 0) 
	{
		cout << "Number of shares purchased can not be negative;"
			<< "Transaction is aborted. \n";
	}
	else
	{
		shares = num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price) {
	share_val = price;
	set_tot();
}

void Stock::show() {
	std::cout << "Company:" << company
		<< "Shares:" << shares << '\n'
		<< "Shares Price : $" << share_val
		<< "Total worth : $" << total_val << '\n';
}

/*���캯�����Դӻ��ĽǶ�����⣬������Ϊ��c�е�goto��䣬��������ĳ�����ű��λ�ã�Ȼ��ִ�к�������ŵĴ���*/
/*���캯��Ҳ����ͨ����һ������������ͷ�ļ��У��������inline���Σ���Ȼ�ͻ��ظ�����*/
/*���ִ������캯���ķ�����1.inline������ͷ�ļ����ඨ��֮�⣻  
						  2.�����������棬���������캯����ͬʱ�Ͱ��������ˣ����get_tot������
						  3.�ͳ�Ա����һ���嵽ʵ�ִ�����
*/
Stock::Stock(std::string company_, long shares_, double share_val_, double total_val_) {
	company = company_;
	shares = shares_;
	share_val = share_val_;
	total_val = total_val_;
}

Stock::~Stock() {
	std::cout << "do nothing\n";
}

