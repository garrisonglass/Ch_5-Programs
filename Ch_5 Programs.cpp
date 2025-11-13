// Ch_5 Programs.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	
	string file_name, Name_of_Town;
	cout << "Please enter the file name.\n Hint: People.txt ";
	cin >> file_name;
	ifstream file(file_name);//open file to read
	cout << "What did you say that name of the town was? ";
	cin >> Name_of_Town;
	if (!file)// Test for open errors
	{
		cout << "Error opening file.\n";
	}
	int P_num;//Population

	//Display Population Bar Chart Header
	cout << "The population growth for " << Name_of_Town << endl;
	cout << "(each * represents 1000 people)\n\n";

	for (int year = 1900; year <= 2000; year+=20)// One iteration per year
	{
	
		cout << year << " ";//print year 
		file >> P_num;// Read from file

		P_num /= 1000;//calculate one per 1000 people

		for (int astrk = 1; astrk <= P_num; astrk++)// Display one asterisk per iteration and one iteration per 1000 people
		{
			cout << "*";
		}
		cout << endl;
	
	}
	file.close();//Closes the file
	return 0;
}