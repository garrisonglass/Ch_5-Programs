// Ch_5 Programs.cpp : Population

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int days;
	float daily_Avg, size_of_pop;//The average daily population increase and the size of the population

	cout << "What is the starting number of organisms? ";
	cin >> size_of_pop;
	cout << "What is the average daily population increase\n";
	cout << "(as a percentage of current population)? ";
	cin >> daily_Avg;
	cout << "Enter the number of days of growth: ";
	cin >> days;

	// Input Validation
	while (size_of_pop < 2 || daily_Avg < 0 || days < 1)
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
		else if (days < 1)//number of days is not enough
		{
			cout << "Number of days must be greater than 0.\n";
			cout << "Enter the number of days of growth: ";
			cin >> days;
		}
	}


	// Calculate and display daily increase
	cout << "\nPopulation increase over " << days << " days.\n";
	cout << "\nDay\tSize of population\n";//line up the table

	for (int day = 1; day <= days; day++)//loop to print days from 1 to 'days' entered
	{ 
		cout << day << "\t";
		cout << size_of_pop << endl;
		size_of_pop *= (1 + (daily_Avg / 100));//updates size of population after each iteration based of average increase 
	}
	return 0;
}