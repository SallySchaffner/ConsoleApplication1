// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	ifstream inFile;
	inFile.open("SalaryData.txt");
	ofstream outFile;
	outFile.open("Salary.out");
	

	string lastName, firstName;
	double salary, increase;

	outFile << fixed << setprecision(2) << showpoint;

	inFile >> lastName >> firstName >> salary >> increase;
	outFile << lastName << " " << firstName << " " << salary << " " << increase << endl;

	inFile >> lastName >> firstName >> salary >> increase;
	outFile << lastName << " " << firstName << " " << salary << " " << increase << endl;

	outFile.close();
	return 0;
}

