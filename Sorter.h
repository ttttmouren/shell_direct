#pragma once
#include<vector>
#include<iostream>
class Sorter
{
public:
	long long compareCount;
	long long moveCount;

	Sorter();
	virtual ~Sorter();
	
	void  reset();
	virtual std::string getName()=0;//让子类自己写，父类并不确定
	virtual void sort(std::vector<int>& arr)=0;
};

