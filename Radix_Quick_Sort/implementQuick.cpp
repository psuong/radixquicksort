#include "quickSort.h"

void quickSort::copyArry(int size, int arry[])
{
	for (int i = 0; i < size; i++)
	{
		dataSet[i] = arry[i];
	}
}

void quickSort::printArry(int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << dataSet[i] << " ";
	}
	std::cout << "\n" << std::endl;
}

void quickSort::sortQuick(int l , int r)
{
	int left, right, pivot, temp;
	left = l;
	right = r;
	pivot = dataSet[(l + r) / 2];

	while (left <= right)
	{
		steps++;
		while (dataSet[left] < pivot)
		{
			left++;
			steps++;
		}
		while (dataSet[right] > pivot)
		{
			right--;
			steps++;
		}
		if (left <= right)
		{
			temp = dataSet[left];
			dataSet[left] = dataSet[right];
			dataSet[right] = temp;
			left++;
			right--;
			steps += 4;
		}
	}

	if (l < right)
	{
		steps++;
		sortQuick(l, right);
	}
	if (left < r)
	{
		steps++;
		sortQuick(left, r);
	}
}