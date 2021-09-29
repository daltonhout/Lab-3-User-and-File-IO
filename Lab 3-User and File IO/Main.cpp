#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
int main() {
	string inputFileName = "C:\Users\LBDHo\source\repos\Lab 3-User and File IO\Lab 3-User and File IO";
	string outputFileName = "C:\Users\LBDHo\source\repos\Lab 3-User and File IO\Lab 3-User and File IO";
	ifstream infile;
	ofstream outfile;
	float num1;
	float num2;
	float num3;
	float num4;

	infile.open("inMeanStd.dat");
	outfile.open("outMeanStd.dat");

	infile >> num1 >> num2 >> num3 >> num4;

	infile.close();
	
	float val[4] = { 5, 8, 9, 2 };
	float sum = 0.0, mean, variance = 0.0, stdDeviation;
	int i;
	for (i = 0; i < 4; ++i)
	sum += val[i];
	mean = sum / 4;
	for (i = 0; i < 4; ++i)
		variance += pow(val[i] - mean, 2);
	variance = variance / 4;
	stdDeviation = sqrt(variance);
	cout << "The data values are: ";
	for (i = 0; i < 4; ++i)
		cout << val[i] << " ";
	cout << endl;
	cout << "The standand deviation of these values is: " << stdDeviation << endl;
	cout << "The mean of these values is: " << mean;

	infile.close();
	outfile << stdDeviation << endl;
	outfile << mean << endl;

	outfile.close();

}