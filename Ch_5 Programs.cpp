// Ch_5 Programs.cpp :Student line up 
 
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int EndSpace = 3,
//		EndLine = 1;
//
//	for (int Row = 1; Row <= 10; Row++)
//	{
//		cout << "    ";
//
//		for (int Space = 1; Space <= EndSpace; Space++)
//		{
//			cout << " ";
//		}
//
//		for (int Line = 1; Line <= EndLine; Line++)
//		{
//			cout << "+";
//		}
//		if (Row < 4)
//		{
//			EndSpace--;
//			EndLine += 2;
//		}
//		else
//		{
//			EndSpace++;
//			EndLine -= 2;
//		}
//		cout << endl;
//	}
//	return 0;
//}
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	string Name, First,	Last;//Students name, if you ain't first you last

	ifstream InputFile;	// Define ifstream object


	InputFile.open("LineUp.txt");// To open file
	if (!InputFile)// Check for errors
		cout << "Error openning file!\n";
	else
	{
		InputFile >> Name;// Read first name
		First = Last = Name;

		while (!InputFile.eof())// Read till end of file
		{
			if (Name > Last)// To sort students by name
				Last = Name;
			if (Name < First)
				First = Name;

			InputFile >> Name;// Read next student
		}

		cout << endl << First << " is at the front of the line.";// Display the student at the front of the line
		cout << Last << " is at the end of the line.\n";// and which is at the back of the line.
	}
	InputFile.close();// Close file
	return 0;
}