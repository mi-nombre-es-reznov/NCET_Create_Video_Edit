#pragma once
#ifndef GLOBALS_H
#define GLOBALS_H
#include <string>
using namespace std;

class Globals
{
private:
	string location = "";
	string filename = "To-Do.txt";
public:
	string get_location(void);
	void set_location(string loc);
	string get_filename(void);
};

#endif