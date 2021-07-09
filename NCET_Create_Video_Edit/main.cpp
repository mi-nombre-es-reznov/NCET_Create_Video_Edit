#include <iostream>
#include <string>
#include "Globals.h"
using namespace std;

// Function Calls
string get_file_location(void);

// Main Function
int main()
{
	string loc = "";

	cout << "Description: This program is used to identify times and issues with videos and format, write, and save to a specified format." << endl << endl;

	loc = get_file_location();

	// Assign value to global variable
	Globals g;
	
	cout << "Current location is: " << g.get_location() << endl;

	g.set_location(loc);
	cout << "Updated location is: " << g.get_location() << endl;

	cout << "File is being saved to " << g.get_location() << endl;

	system("pause");
	return 0;
}

// Function Definitions
string get_file_location(void)
{
	string loc = "";
	cout << "Where is this file being saved? ";
	cin >> loc;

	return loc;
}