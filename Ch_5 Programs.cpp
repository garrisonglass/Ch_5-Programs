// Ch_5 Programs.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream Inputfile;
	Inputfile.open("People.txt");              // Open file
	if (!Inputfile)							   // Test for open errors
		cout << "Error opening file.\n";

	int Pop;  								   // Population

	// Display Population Bar Chart Header
	cout << "My Home Town\n"
		<< "(each * represents 1000 people)\n\n";

	for (int Year = 1; Year <= 6; Year++)
	{  // One iteration per year
		switch (Year)
		{
		case 1: cout << "1900 ";
			break;
		case 2: cout << "1920 ";
			break;
		case 3: cout << "1940 ";
			break;
		case 4: cout << "1960 ";
			break;
		case 5: cout << "1980 ";
			break;
		case 6: cout << "2000 ";
			break;
		}

		Inputfile >> Pop;					 // Read from file

		Pop /= 1000;        				 // calculate one per 1000 people

		for (int Arisk = 1; Arisk <= Pop; Arisk++)
		{  // Display one asterisk per iteration
		   // One iteration per 1000 people 
			cout << "*";
		}

		cout << endl;
	}
	Inputfile.close(); 						// To close file
	return 0;
}