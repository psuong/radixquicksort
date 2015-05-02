#ifndef QUICKSORT_H
#define QUICKSORT_H
#include <iostream>

class quickSort
{
public:
	quickSort(int size)
	{
		dataSet = new int[size];
	}

	void copyArry(int size, int arry[]);

	void printArry(int size);

	void sortQuick(int l, int r);

private:
	int *dataSet;
};

#endif // !QUICKSORT_H
