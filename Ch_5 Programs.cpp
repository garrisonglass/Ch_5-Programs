// Ch_5 Programs.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream input_file;
	input_file.open("People.txt");// Open file
	if (!input_file)// Test for open errors
		cout << "Error opening file.\n";

	int P_num;// Population

	// Display Population Bar Chart Header
	cout << "My Home Town\n";
	cout << "(each * represents 1000 people)\n\n";

	for (int year = 1; year <= 6; year++)
	{  // One iteration per year
		switch (year)
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

		input_file >> P_num;// Read from file

		P_num /= 1000;// calculate one per 1000 people

		for (int Arisk = 1; Arisk <= P_num; Arisk++)
		{  // Display one asterisk per iteration and one iteration per 1000 people 
			cout << "*";
		}

		cout << endl;
	}
	input_file.close();//Closes the file
	return 0;
}