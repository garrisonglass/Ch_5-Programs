// Ch_5 Programs.cpp :Student line up 
 

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	string Name, First,	Last;//Students name, if you ain't first you last

	ifstream InputFile;	// Define ifstream object


	InputFile.open("LineUp.txt");// To open file
	if (!InputFile)// Check for errors
		cout << "Error opening file!\n";
	else
	{
		InputFile >> Name;// Read first name
		First = Last = Name;

		while (InputFile >> Name)// Read till end of file
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