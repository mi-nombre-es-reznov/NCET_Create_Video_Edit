#include "Globals.h"

string Globals::get_location(void)
{
	return location;
}

void Globals::set_location(string loc)
{
	location = loc;
}

string Globals::get_filename(void)
{
	return filename;
}