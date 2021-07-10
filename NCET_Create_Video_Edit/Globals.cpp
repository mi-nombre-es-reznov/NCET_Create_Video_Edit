#include "Globals.h"
#include <iostream>
#include <Windows.h>

string Globals::get_filename(void)
{
	return filename;
}

int Globals::get_video_length(void)
{
	// Local Variables
	int min = 0;
	int sec = 0;
	int length = 0;

	// Get bounded time length from user
	try
	{
		cout << "How many minutes and seconds are in the video? [min sec]";
		cin >> min >> sec;

		if (min < 0 || sec < 0 || sec > 59)
		{
			throw "Incorrect Parameters. Please enter a valid time.";
		}

		// Convert time length and set time to minutes
		length = ((min * 60) + sec);
	}
	catch(const char *Error)
	{
		cout << Error << endl;
		Sleep(1000);
	}

	return length;	// int representing time of video. 0 if error.
}