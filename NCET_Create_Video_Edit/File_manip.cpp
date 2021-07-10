#include <iostream>
#include "File_manip.h"
#include "Globals.h"
#include <fstream>
#include <sys/stat.h>
#include <filesystem>
#include <Windows.h>
using namespace std;

/* ----------------------------- 
         Location Functions
   -----------------------------*/

// Returns location data
string File_Manipulation::get_location(void)
{
	return location;
}

// Define File manipulation functions
bool File_Manipulation::location_existance(string loca)
{
	// Verify file doesn't exist
	struct stat buffer;

	return (stat(loca.c_str(), &buffer) == 0);	// Return Result
}

// Get file location from user
void File_Manipulation::set_location(void)
{
	bool valid_loc = false;
	string loc = "";

	while (valid_loc == false)	// Loop until valid location
	{
		try // Test location validity
		{
			cout << "Where is this file being saved? ";
			getline(cin, loc);

			if (loc == "")	// Verify string is not empty
				throw "Empty String";

			// Test location validity
			valid_loc = location_existance(loc);

			// Message if false
			if (valid_loc == false)
			{
				system("CLS");
				cout << "Path does not exist!\nPlease insert valid path.";
				Sleep(3000);
				system("CLS");
			}
		}
		catch (const char *exception)	// Catch if string is empty
		{
			cout << "Failure! Exception: " << exception << endl;
			valid_loc = false;	// Stay in loop
		}
	}
	
	location = loc;
}

/* -----------------------------
		   File Functions
   -----------------------------*/

// Check file existance
char File_Manipulation::File_existance(string loc)
{
	Globals g;

	// Local variables
	string new_file = (loc + "/" + g.get_filename());
	char status;
	fstream tester;

	// Navigate to location and test file existance.
	tester.open(new_file, ios::in);

	// Determine path from file existence
	if (!tester)
	{
		tester.open(new_file, ios::out);
		status = 'N';
	}
	else
	{
		cout << "File exists! Re-routing";
		Sleep(1000);

		for (int i = 0; i < 3; i++)
		{
			cout << ".";
			Sleep(1000);
		}

		status = 'E';
	}

	// Return status
	return status;
}