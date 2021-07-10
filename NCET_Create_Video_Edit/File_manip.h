#pragma once
#include <string>
using namespace std;

class File_Manipulation
{
private:
	string location = "";
	string file_loc;
	char loc_code;
public:
	// Location Functions
	string get_location(void);
	void set_location(void);
	bool location_existance(string);

	// File Functions
	char File_existance(string);
};