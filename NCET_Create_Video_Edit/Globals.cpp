#include "Globals.h"
#include <iostream>
#include <Windows.h>

// Return filename
string Globals::get_filename(void)
{
	return filename;
}

// Gather length of target video
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

// Set the time
void Globals::set_time(int tme)
{
	seconds = tme;
}

// Get discrepency time from user
int Globals::get_time(void)
{
	// Local Variables
	int min = 0;
	int sec = 0;
	int length = 0;

	// Get time
	try
	{
		system("CLS");
		cout << "Minute and second of error? [min sec]";
		cin >> min >> sec;

		if (min < 0 || sec < 0 || sec > 59)
		{
			throw "Incorrect Parameters. Please enter a valid time.";
		}

		// Convert time length and set time to minutes
		length = ((min * 60) + sec);

		if (length > seconds)
		{
			throw "Value is passed video end time. Please enter a valid time.";
			length = 0;
		}
	}
	catch (const char* Error)
	{
		cout << Error << endl;
		Sleep(1000);
	}

	return length;	// int representing time of video. 0 if error.
}

// Get discrepency reason from user
string Globals::get_description()
{
	// Local Variables
	Globals g;
	int option = -1;
	string choice = "";
	string arr[8] = { "Delete loading screen", "Start Video Here", "Start Here", "Continue Here", "End Video Here", "End Video with White Background", "Blur notification", "Custom" };

	while (option < 0 || option > 7)
	{
		system("CLS");
		cout << "----------------------" << endl;
		cout << " Discreption choices  " << endl;
		cout << "----------------------" << endl;

		for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
		{
			cout << (i + 1) << ") " << arr[i] << endl;
		}

		cout << "\nSelect an option: ";
		cin >> option;
		option -= 1;
	}

	if (arr[option] == "Custom")
	{
		system("CLS");
		cout << "Enter Custom description: ";
		cin.ignore();
		getline(cin, choice);
	}
	else
	{
		choice = arr[option];
	}

	return choice;
}