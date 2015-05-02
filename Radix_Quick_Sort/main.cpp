//http://www.currentresults.com/Weather/US/average-annual-precipitation-by-city.php
#include <iostream>
#include <fstream>
#include <string>
#include "radixSort.h"
using namespace std;

int main()
{
	const int dataSize = 26;
	int data[dataSize];
	int radixSteps;
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
	
	radixSort testRadix(dataSize);
	testRadix.copyArray(dataSize, data);
	testRadix.sortRadix(dataSize);
	testRadix.printArry(dataSize);
	radixSteps = testRadix.getSteps();
	cout << radixSteps << endl;

	return 0;
}