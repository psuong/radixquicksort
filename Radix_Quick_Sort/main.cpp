//http://www.currentresults.com/Weather/US/average-annual-precipitation-by-city.php
#include <fstream>
#include <string>
#include <time.h>
#include "radixSort.h"
#include "quickSort.h"
using namespace std;

int main()
{
	const int dataSize = 51;
	int data[dataSize];
	int radixSteps;
	int quickSteps;

	clock_t t;
	clock_t t2;

	double diff;
	double diff2;

	//File IO
	string line;
	ifstream dataFile;

	dataFile.open("precipitation.txt");
	int i = 0;
	while (getline(dataFile, line) && i < dataSize)
	{
		data[i] = stoi(line);
		i++;
	}
	dataFile.close();

	//testing Radix Sort
	t = clock();
	radixSort testRadix(dataSize);
	testRadix.copyArray(dataSize, data);
	testRadix.sortRadix(dataSize);
	testRadix.printArry(dataSize);
	diff = clock() - t;
	cout << "Radix Sort Time: " << diff << endl;

	//testing Quick Sort
	t2 = clock();
	quickSort testQuick(dataSize);
	testQuick.copyArry(dataSize, data);
	testQuick.sortQuick(0, dataSize - 1);
	testQuick.printArry(dataSize);
	diff2 = clock() - t2;
	cout << "Quick Sort Time: " << diff2 << endl;


	return 0;
}