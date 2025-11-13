// Ch_5 Programs.cpp :Pattern
 
#include <iostream>
using namespace std;

int main()
{/*
	int plus_per_line = 1;//plus character per line

	for (int row = 1; row <= 20; row++)//
	{
		for (int line = 1; line <= plus_per_line; line++)
		{
			cout << "+";
		}
		if (row < 10)
		{
			plus_per_line += 1;//increase each row by 1
		}
		else
		{
			plus_per_line -= 1;//decrease each row by 1
		}
		cout << endl;
	}
	*/
	for (int row = 1; row <= 20; ++row)//runs 20 iterations 
	{
		int plus_per_line = (row <= 10) ? row : 21 - row;//prints rows 1-10 as row 1-10, prints rows 11-20 as 21-row (10,9,8 etc.) 
		for (int plus = 1; plus <= plus_per_line; ++plus)// 
		{
			cout << "+";
		}
		cout << endl;
	}
	return 0;
}
