#ifndef QUICKSORT_H
#define QUICKSORT_H
#include <iostream>

class quickSort
{
public:
	quickSort(int size)
	{
		dataSet = new int[size];
		steps = 0;
	}

	void copyArry(int size, int arry[]);

	void printArry(int size);

	void sortQuick(int l, int r);

	int getSteps() { return steps; }

private:
	int *dataSet;
	int steps;
};

#endif // !QUICKSORT_H
