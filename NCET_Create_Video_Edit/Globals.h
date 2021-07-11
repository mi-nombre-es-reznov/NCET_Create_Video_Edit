#pragma once
#ifndef GLOBALS_H
#define GLOBALS_H
#include <string>
using namespace std;

class Globals
{
private:
	string filename = "To-Do.txt";
	char file_exists = 'a';
	int seconds;
public:
	string get_filename(void);
	int get_video_length(void);
	int get_time(void);
	void set_time(int);
	string get_description(void);
};

#endif