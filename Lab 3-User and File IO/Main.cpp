#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main()
{
	float val[4] = { 4.0, 6.0, 8.0, 9.0 };
	float sum = 0.0, mean, variance = 0.0, stdDeviation;

	ofstream myfile;
	myfile.open("example.txt");
	myfile << "will this work or not\n";
	myfile.close();

	myfile.open("example.txt", ios::out | ios::app | ios::binary);
  if (myfile.is_open()) {/* ok, proceed with output */ }

	return 0;
}

	
