// Ch_5 Programs.cpp :Random Number game 

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int RandNum, Seed, Guess;
	int count = 1;

	Seed = time(0);
	srand(Seed);
	RandNum = 1 + rand() % 25;
	
	// cout << RandNum << endl;

	cout << "\nI generated a random number between 1 and 25\n"
		<< "Can you guess what my number is? ";
	cin >> Guess;

	while (Guess > RandNum)
	{
		cout << "Too high. Try again.\n";
		cin >> Guess;
		count++;
	}
	while (Guess < RandNum)
	{
		cout << "Too low. Try again.\n";
		cin >> Guess;
		count++;
	}

	if (count == 1)
	{
		cout << "Congratulations. You figured out my number and you got it with " << count << " guess!\n\n";
	}
	else
	{
		cout << "Congratulations. You figured out my number. It only took you " << count << " guesses!\n\n";
	}
	return 0;
}