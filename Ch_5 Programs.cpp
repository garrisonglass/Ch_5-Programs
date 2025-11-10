// Ch_5 Programs.cpp :Student line up 
 

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	string name, first,	last;//Students name, if you ain't first you last
	int count = 1;
	ifstream InputFile;	// Define ifstream object


	InputFile.open("LineUp.txt");// To open file
	if (!InputFile)// Check for errors
		cout << "Error opening file!\n";
	else
	{
		InputFile >> name;// Read first name
		first = name;
		last = name;
		
		while (InputFile >> name)// Read till end of file
		{
			
			if (name < first)// To sort students by name
				first = name;
			if (name > last)
				last = name;
			count++;
			
		}

		cout << first << " is at the front of the line.\n";// Display the student at the front of the line
		cout << last << " is at the end of the line.\n";// and which is at the back of the line.
		cout << "There are " << count << " students." <<  endl;
	}
	InputFile.close();// Close file
	return 0;
}