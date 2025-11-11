// Ch_5 Programs.cpp : Population

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int Days, size_of_pop;// Days calculated for. The starting number of organisms
	double daily_Avg;// The average daily population increase

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
			cout << "Error!\nStarting size of population must be greater than 2.\n";
			cout << "What is the starting number of organisms? ";
			cin >> size_of_pop;
		}
		else if (daily_Avg < 0)//to calculate growth the change has to be greater than zero
		{
			cout << "Error!\nAverage daily population increase must be greater than 0.\n";
			cout << "What is the average daily population increase?\n";
			cout << "(as a percentage of current population)? ";
			cin >> daily_Avg;
		}
		else if (Days < 1)//number of days is not enough
		{
			cout << "Error!\nNumber of days must be greater than 0.\n";
			cout << "Enter the number of days of growth: ";
			cin >> Days;
		}
	}


	// Calculate and display daily increase
	cout << "\nTable displaying population increase over " << Days << " days.\n";
	cout << "      Day              Size of population\n";//line up the table

	for (int also_days = 1; also_days <= Days; also_days++)
	{
		cout << "      " << setw(2) << also_days << "                      ";
		cout << size_of_pop << endl;
		size_of_pop *= (1 + (daily_Avg / 100));
	}
	return 0;
}