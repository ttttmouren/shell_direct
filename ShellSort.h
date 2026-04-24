#pragma once
#include"Sorter.h"
class ShellSort:public Sorter
{
public:
    void sort(std::vector<int>& arr) override;
    std::string getName() override;
};

