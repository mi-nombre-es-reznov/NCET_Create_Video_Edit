#include <iostream>
#include <string>
#include <Windows.h>
#include "Globals.h"
#include "File_manip.h"
using namespace std;

// Main Function
int main()
{
	// Local Variables
	string loc = "";
	char file_code;
	Globals g;
	File_Manipulation FM;

	// Description for project
	cout << "Description: This program is used to input times and descriptions where issues are found in videos." << endl << endl;
	system("pause");
	system("CLS");

	// Location data
	FM.set_location();
	loc = FM.get_location();
	system("CLS");
	cout << "Testing path existance";
	Sleep(1000);

	for (int i = 0; i < 3; i++)
	{
		cout << ".";
		Sleep(1000);
	}

	system("CLS");
	cout << "Location Exists: " << loc << endl << endl << endl << endl;

	// File Data

	// End Program Gracefully
	system("pause");
	return 0;
}