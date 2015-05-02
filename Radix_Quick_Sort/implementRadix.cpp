#include "radixSort.h"

void radixSort::copyArray(int size, int arry[])
{
	for (int i = 0; i < size; i++)
	{
		dataSet[i] = arry[i];
	}
}

void radixSort::printArry(int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << dataSet[i] << " ";
	}
	std::cout << "\n" << std::endl;
}

int radixSort::getMax(int size)
{
	int max = dataSet[0];
	for (int i = 1; i < size; i++)
	{
		if (dataSet[i] > max)
			max = dataSet[i];
	}
	return max;
}

void radixSort::countSort(int size, int exp)
{
	int *outputArry = new int[size];
	int count[10] = { 0 };

	for (int i = 0; i < size; i++)
	{
		count[(dataSet[i] / exp) % 10]++;
	}

	for (int i = 1; i < 10; i++)
	{
		count[i] += count[i - 1];
	}

	for (int i = size - 1; i >= 0; i--)
	{
		outputArry[count[(dataSet[i] / exp) % 10] - 1] = dataSet[i];
		count[(dataSet[i] / exp) % 10]--;
	}
	for (int i = 0; i < size; i++)
	{
		dataSet[i] = outputArry[i];
	}
}

void radixSort::sortRadix(int size)
{
	int max = radixSort::getMax(size);

	for (int i = 1; max / i > 0; i *= 10)
	{
		countSort(size, i);
	}
}