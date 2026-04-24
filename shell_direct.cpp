// shell_direct.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
#include <iostream>
#include<vector>
#include"Sorter.h"
#include"InsertionSort.h"
#include"ShellSort.h"
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
vector<int> generateRandom(int size) {
	vector<int> data;
	for (int i = 0;i < size;i++)data.push_back(rand() % 1000000);
    return data;
}
int main()
{
	srand(time(0));
	int sizes[] = { 10,100,1000,10000,100000 };

	InsertionSort ins;
	ShellSort shl;

	cout << left << setw(10) << "data" << setw(15) << "algorithm"
		<< setw(15) << "compareCount" << setw(15) << "moveConut" << endl;
	cout << "--------------------------------------------------------" << endl;

    for (int size : sizes) {
        vector<int> raw = generateRandom(size);

        vector<int> copy1 = raw;
        ins.reset();
        ins.sort(copy1);
        cout << left << setw(10) << size << setw(15) << ins.getName()
            << setw(15) << ins.compareCount << setw(15) << ins.moveCount << endl;

        vector<int> copy2 = raw;
        shl.reset();
        shl.sort(copy2);
        cout << left << setw(10) << "" << setw(15) << shl.getName()
            << setw(15) << shl.compareCount << setw(15) << shl.moveCount << endl;
        cout << "--------------------------------------------------------" << endl;
    }
    return 0;
}