#include <iostream>
#include <string>
#include <Windows.h>
#include "Globals.h"
#include "File_manip.h"
using namespace std;

// Main Function
int main()
{
	/* -----------------------------
			 Local Variables
	   ----------------------------- */
	string loc = "";
	char file_code = 'E';
	Globals g;
	File_Manipulation FM;

	/* -----------------------------
		    Program Description
	   ----------------------------- */
	cout << "Description: This program is used to input times and descriptions where issues are found in videos." << endl << endl;
	system("pause");

	/* -----------------------------
			     File Data
	   ----------------------------- */
	while (file_code == 'E')
	{
		/* -----------------------------
				   Location Data
		   ----------------------------- */
		system("CLS");
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
		file_code = FM.File_existance(loc);
	}

	/* -----------------------------
		   End Program Gracefully
	   ----------------------------- */
	system("pause");
	return 0;
}