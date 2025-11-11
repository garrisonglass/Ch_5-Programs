// Ch_5 Programs.cpp : Population

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int Days, SizeOfPop;// Days calculated for. The starting number of organisms
	double DailyIncrease;// The average daily population increase

	cout << "What is the starting number of organisms? ";
	cin >> SizeOfPop;
	cout << "What is the average daily population increase\n";
	cout << "(as a percentage of current population)? ";
	cin >> DailyIncrease;
	cout << "Enter the number of days of growth: ";
	cin >> Days;

	// Input Validation
	while (SizeOfPop < 2 || DailyIncrease < 0 || Days < 1)
	{
		if (SizeOfPop < 2)
		{
			cout << "Error!\nStarting size of population must be greater than 2.\n";
			cout << "What is the starting number of organisms? ";
			cin >> SizeOfPop;
		}
		else if (DailyIncrease < 0)
		{
			cout << "Error!\nAverage daily population increase must be greater than 0.\n";
			cout << "What is the average daily population increase?\n";
			cout << "(as a percentage of current population)? ";
			cin >> DailyIncrease;
		}
		else if (Days < 1)
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
		cout << SizeOfPop << endl;
		SizeOfPop *= (1 + (DailyIncrease / 100));
	}
	return 0;
}