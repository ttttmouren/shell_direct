#pragma once
#include"Sorter.h"
class InsertionSort:public Sorter
{
public:
	void sort(std::vector<int>& arr) override;
	std::string getName() override;
};

