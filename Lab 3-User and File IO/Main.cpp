/* Dalton Hout
* C++ 2021
* September 29th
* Lab 3 User and File IO
* Computation of mean and standard deviation of a population set by an input file "inMeanStd.dat"
* and an output file "outMeanStd.dat" 
*/

#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
int main() {
	// Creating input and ouput files with locations 
	string inputFileName = "C:\Users\LBDHo\source\repos\Lab 3-User and File IO\Lab 3-User and File IO";
	string outputFileName = "C:\Users\LBDHo\source\repos\Lab 3-User and File IO\Lab 3-User and File IO";
	ifstream infile;
	ofstream outfile;
	// Values for the floats
	float num1;
	float num2;
	float num3;
	float num4;
	// Opening both input and output files
	infile.open("inMeanStd.dat");
	outfile.open("outMeanStd.dat");
	// Inputting values and closing the input file
	infile >> num1 >> num2 >> num3 >> num4;

	infile.close();
	// Calculation for mean and standard deviation
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
	// Outputting the orignial values, mean, and standard deviation to the screen
	cout << "The data values are: ";
	for (i = 0; i < 4; ++i)
		cout << val[i] << " ";
	cout << endl;
	cout << "The standand deviation of these values is: " << stdDeviation << endl;
	cout << "The mean of these values is: " << mean;
	// Outputting the mean and standard deviation values to the output file
	infile.close();
	outfile << stdDeviation << endl;
	outfile << mean << endl;
	// Closing output file
	outfile.close();
	return 0;
}