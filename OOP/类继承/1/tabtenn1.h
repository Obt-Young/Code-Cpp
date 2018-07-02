#pragma once

#ifndef _TABTENN1_H_
#define _TABTENN1_H_

#include <String>
#include <iostream>

using std::string;

/**********************************����*********************************/
class TableTennisPlayer {
private:
	string firstname;
	string lastname;
	bool hasTable;

public:
	/*���캯��*/
	TableTennisPlayer();
	TableTennisPlayer(const string &firstname_, const string &lastname_,bool hasTable_);


	/*��Ա����*/
	void Name() const {
		std::cout << lastname << ", " << firstname;
	};
	bool HasTable() const { 
		std::cout << "hasTable is :" << hasTable <<std::endl;
		return hasTable;
	};
	void ResetTable(bool v) {
		hasTable = v;
	};
};

/*********************************��չ��*********************************/
class RatedPlayer : public TableTennisPlayer {
private:
	unsigned int rating;
public:
	/*���캯��*/
	RatedPlayer();
	/*Ҫ���ڹ��캯������ʱ���ѻ���ĳ�Ա����һ��д��������Ϊʵ����һ����չ��ı�Ҫ��������ʵ����һ������*/
	RatedPlayer(const string &firstname_, const string &lastname, bool hasTable_,unsigned int rating_);
	/*����һ�ֻ��ڵ�ǰ����ʵ���Ĺ��캯��,ע�����ﴫ�������ã���ô�����ָ��ʹ�ֵ�в��У�*/

	/*��Ա����*/
	RatedPlayer(const TableTennisPlayer & ptr, unsigned int rating_);
	unsigned int Rating() const {
		std::cout << "Rating is :" << rating << std::endl;
		return rating;
	};
	void ResetRating(unsigned int r) {
		rating = r;
	};
};






#endif









