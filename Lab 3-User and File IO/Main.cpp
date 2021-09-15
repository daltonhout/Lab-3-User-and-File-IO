#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
float findStandardDeviation(float* array, int count);
int main()
{
	int count, i;
	float inputArray[500];


	
	
	
	ofstream myfile;
	myfile.open("example.txt");
	myfile << "will this work or not\n";
	myfile.close();

	myfile.open("example.txt", ios::out | ios::app | ios::binary);
  if (myfile.is_open()) {/* ok, proceed with output */ }

	return 0;
}

	
