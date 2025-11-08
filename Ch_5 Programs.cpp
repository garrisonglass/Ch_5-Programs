// Ch_5 Programs.cpp :Pattern
 
#include <iostream>
using namespace std;

int main()
{
	int EndSpace = 3,
		EndLine = 1;

	for (int Row = 1; Row <= 10; Row++)
	{
		cout << "    ";

		for (int Space = 1; Space <= EndSpace; Space++)
		{
			cout << " ";
		}

		for (int Line = 1; Line <= EndLine; Line++)
		{
			cout << "+";
		}
		if (Row < 4)
		{
			EndSpace--;
			EndLine += 2;
		}
		else
		{
			EndSpace++;
			EndLine -= 2;
		}
		cout << endl;
	}
	return 0;
}
