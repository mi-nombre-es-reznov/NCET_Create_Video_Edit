#pragma once
#ifndef GLOBALS_H
#define GLOBALS_H
#include <string>
using namespace std;

class Globals
{
private:
	string filename = "To-Do.txt";
	char file_exists;
public:
	string get_filename(void);
};

#endif