#include <iostream>
#include "Globals.h"
#include <fstream>
#include <filesystem>
using namespace std;

// Define File manipulation functions
char Test_location(string loca)
{
	char result = 'N';

	// Create global object
	Globals g;

	// Create file object
	ofstream DataFile;
	DataFile.open(g.get_filename());

	return result;
}