#include "stdafx.h"
#include "tabtenn1.h"
#include <iostream>

/*************************************���๹�캯��***********************************/
/*  #1   Ĭ�Ϲ��캯��  */
TableTennisPlayer::TableTennisPlayer()
{
	/*�����ʹ�á���ʼ�����б��﷨�������û���Ĺ��캯������ô������ô��ʽָ������Ĺ��캯����û�ã�����ʹ��Ĭ�Ϲ��캯��*/
	firstname = lastname = "none";
	hasTable = false;
}

/*Ϊ��������ù��캯��ʱ��ֱ�Ӵ��ַ��������������Σ�ʹ��const string &���Σ���Ҳ�Ӳ���˵��һ�㣺
  �����캯���������������Գ�Ա������ֵ����Ҳ�ǡ��������������ʲô��ʽ��ȫ����ν�����������ṹ��������У�
  ֻҪ�ѳ�Ա������ֵ��ʼ���þ�����
*/
/*  #2   ���캯��2  */
TableTennisPlayer::TableTennisPlayer(const string &firstname_, const string &lastname_, bool hasTable_) {
	firstname = firstname_;
	lastname = lastname_;
	hasTable = hasTable_;
}


/***********************************��չ�๹�캯��***********************************/
/*  #1   Ĭ�Ϲ��캯��  */
RatedPlayer::RatedPlayer()
{
	TableTennisPlayer();
	rating = 0;
}

/*���๹�캯������롱ʹ�û���Ĺ��캯��������һ�����࣬�Թ��Լ�ʹ��*/
/*���������ָ��ʹ�û�����ĸ����캯������ô��ʹ��Ĭ�Ϲ��캯��(ò��ʵ�ʹ�����Ҳ����ִ������Ĭ�Ϲ��죬Ȼ����ִ��ָ�������)*/
/*��ʽ����û��Ч�������ǻ��Ĭ�ϳ�ʼ������,�������ʵ���Ǵ�������ע�͵�*/
/*  #2   ���캯��2  */
/*
RatedPlayer::RatedPlayer(const string &firstname_,const string &lastname_, bool hasTable_,unsigned int rating_) {
	TableTennisPlayer(firstname_, lastname_, hasTable_);
	rating = rating_;
}*/


/*  #3   ���캯��3  */
/* ((((((�ص�))))))�������ʹ�û����Ĭ�Ϲ��캯��������ʹ�û����ĳ�����캯��(����ʹ��#2���캯��)����ô�������롱��ʹ��������չ�๹�캯����ʽ*/
/* ���������ʼ�����б��﷨��*/
RatedPlayer::RatedPlayer(const string &firstname_, const string &lastname_, bool hasTable_, unsigned int rating_)
	:TableTennisPlayer(firstname_,lastname_,hasTable_)
{
	rating = rating_;
}

/*  #4   ���캯��4  */
/* ����#3���캯�����﷨*/
RatedPlayer::RatedPlayer(const TableTennisPlayer & ptr, unsigned int rating_)
	:TableTennisPlayer(ptr){
	rating = rating_;
}