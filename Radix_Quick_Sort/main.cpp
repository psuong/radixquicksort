//http://www.currentresults.com/Weather/US/average-annual-precipitation-by-city.php
#include <fstream>
#include <string>
#include <time.h>
#include "radixSort.h"
#include "quickSort.h"
using namespace std;

int main()
{
	const int dataSize = 26;
	int data[dataSize];
	int radixSteps;
	int quickSteps;

	//File IO
	string line;
	ifstream dataFile;

	dataFile.open("precipitation.txt");
	int i = 0;
	while (getline(dataFile, line) && i < 26)
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
	radixSteps = testRadix.getSteps();

	cout << "Steps: " << radixSteps << endl;

	//testing Quick Sort
	quickSort testQuick(dataSize);
	testQuick.copyArry(dataSize, data);
	testQuick.sortQuick(0, dataSize - 1);
	testQuick.printArry(dataSize);
	quickSteps = testQuick.getSteps();
	cout << "Steps: " << quickSteps << endl;


	return 0;
}