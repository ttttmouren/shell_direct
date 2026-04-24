#include "Sorter.h"
Sorter::Sorter() :compareCount(0),moveCount(0){
}
Sorter::~Sorter(){}

void Sorter::reset() {
	compareCount = 0;
	moveCount = 0;
}