#include "InsertionSort.h"
void InsertionSort::sort(std::vector<int>& arr) {
	int n = arr.size();
	for (int i = 1;i < n;i++) {
		int temp = arr[i];
		int j = i - 1;
		while (j >= 0) {
			compareCount++;
			if (arr[j] > temp) {
				arr[j + 1] = arr[j];
				moveCount++;
				j--;
			}
			else{
				break;
			}
		}
		arr[j + 1] = temp;
		moveCount++;
	}
}
std::string InsertionSort::getName() {
	return "直接插入排序";
}
