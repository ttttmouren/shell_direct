#include "ShellSort.h"
void ShellSort::sort(std::vector<int>& arr) {
	int n = arr.size();
	for (int gap = n / 2;gap > 0;gap /= 2) {
		for (int i = gap;i < n;i++) {
			int temp = arr[i];
			int j = i;
			while (j >= gap) {
				compareCount++;
				if (arr[j - gap] > temp) {
					arr[j] = arr[j - gap];
					moveCount++;
					j -= gap;
				}
				else {
					break;
				}
			}
			arr[j] = temp;
			moveCount++;
		}
	}
}
std::string ShellSort::getName() {
	return "希尔排序";
}