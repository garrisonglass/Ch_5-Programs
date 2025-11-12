// Ch_5 Programs.cpp : Population

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int Days;
	float daily_Avg; //Days of growth and the average daily population increase
	double size_of_pop;//The average daily population increase

	cout << "What is the starting number of organisms? ";
	cin >> size_of_pop;
	cout << "What is the average daily population increase\n";
	cout << "(as a percentage of current population)? ";
	cin >> daily_Avg;
	cout << "Enter the number of days of growth: ";
	cin >> Days;

	// Input Validation
	while (size_of_pop < 2 || daily_Avg < 0 || Days < 1)
	{
		if (size_of_pop < 2)//population is too small
		{
			cout << "Starting size of population must be greater than 2.\n";
			cout << "What is the starting number of organisms? ";
			cin >> size_of_pop;
		}
		else if (daily_Avg < 0)//to calculate growth the change has to be greater than zero
		{
			cout << "Average daily population increase must be greater than 0.\n";
			cout << "What is the average daily population increase?\n";
			cout << "(as a percentage of current population)? ";
			cin >> daily_Avg;
		}
		else if (Days < 1)//number of days is not enough
		{
			cout << "Number of days must be greater than 0.\n";
			cout << "Enter the number of days of growth: ";
			cin >> Days;
		}
	}


	// Calculate and display daily increase
	cout << "\nTable displaying population increase over " << Days << " days.\n";
	cout << "      Day              Size of population\n";//line up the table

	for (int day = 1; day <= Days; day++)
	{
		cout << "      " << setw(2) << day << "                      ";
		cout << size_of_pop << endl;
		size_of_pop *= (1 + (daily_Avg / 100));
	}
	return 0;
}