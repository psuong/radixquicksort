#include <iostream>

class radixSort
{
public:
	radixSort(int size)
	{
		dataSet = new int[size];
		steps = 0;
	}

	void copyArray(int size, int arry[]); //copies the array from file

	void printArry(int size); //prints the array

	void sortRadix(int size); //the radix sort function

	int getSteps() { return steps; }

private:
	int *dataSet;
	int steps;
	int getMax(int size); //gets the max value of the array
	void countSort(int size, int exp); //private function, radix sort uses count sort
};