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
	int length = 0;
	Globals g;
	File_Manipulation FM;
	int when = 0;
	string discrep = "";
	char another = 'a';
	int min, sec = 0;
	string formatted = "";

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
			   Video details
	   ----------------------------- */
	do
	{
		when = min = sec = 0;	// Reset ints and loop checkers
		formatted = "";	// Reset String
		another = 'a';

		while (length == 0)
		{
			system("CLS");
			length = g.get_video_length();
			cout << "Video Length: " << length << endl;
			g.set_time(length);
		}

		// Get discrepencies
		while (when == 0)
		{
			when = g.get_time();
		}

		discrep = g.get_description();
		system("CLS");
		min = (when / 60);			// Ex: 113 --> (113/60) = 1.88333 --> 1
		sec = (when - (min * 60));	// Ex: 113 --> 113 - (1*60) --> 113 - 60 = 58

		// Format write-out info
		if (min == 0)
		{
			if (sec < 10)
			{
				formatted = ("00:0" + to_string(sec));
			}
			else
			{
				formatted = ("00:" + to_string(sec));
			}
		}
		else if (min < 10)
		{
			if (sec < 10)
			{
				formatted = ('0' + to_string(min) + ":0" + to_string(sec));
			}
			else
			{
				formatted = ('0' + to_string(min) + ':' + to_string(sec));
			}
		}
		else
		{
			if (sec < 10)
			{
				formatted = (to_string(min) + ":0" + to_string(sec));
			}
			else
			{
				formatted = (to_string(min) + ":" + to_string(sec));
			}
		}

		// Display to user
		formatted = (formatted + '\t' + discrep);

		// Write data to file
		FM.write_file(formatted, loc);
		system("CLS");

		// Check if user wants to add another entry
		while (another != 'n' && another != 'y')
		{
			system("CLS");
			cout << "Add another discrepency? [Y/n]: ";
			cin >> another;

			another = tolower(another);
		}
	} while (another == 'y');

	system("CLS");
	cout << "Thank you for using software powered by NCompEng Technologies!" << endl;

	/* -----------------------------
		   End Program Gracefully
	   ----------------------------- */
	system("pause");
	return 0;
}