#include "Header.h"

int hours;
int minutes;
int seconds;
int userHours;
void clockDisplay(string meridianHour, string formatHour, string formatMinute, string formatSecond) {


	cout << "**************************\t" << "**************************" << endl;
	cout << "*     12-Hour Clock      *\t" << "*     24-Hour Clock      *" << endl;
	cout << "*        " << meridianHour << ":" << formatMinute << ":" << formatSecond << "        *\t" << "*        " << formatHour << ":" << formatMinute << ":" << formatSecond << "        *" << endl;
	cout << "**************************\t" << "**************************" << endl;
	cout << endl;







}

void menuDisplay()
{
	//user meun list to add time or quiting the program 
	cout << "************************************" << endl;
	cout << "*     1 - Add One Hour             *" << endl;
	cout << "*     2 - Add One Minute           *" << endl;
	cout << "*     3 - Add One Second           *" << endl;
	cout << "*     4 - Exit Program             *" << endl;
	cout << "************************************" << endl;

}

//
string makeMeridianHour(int h)
{
	string meridianHour;
	if (h > 12) {
		h = h - 12;
		// add if loop to add leading 0 figure out string conversion
		string zero = "0";
		if (h < 10) {
			string meridianHour = zero += to_string(h);

			return meridianHour;
		}
		else {
			string meridianHour = to_string(h);

			return meridianHour;
		}



	}
	else {
		//copy leading 0 stuff here too
		string zero = "0";
		if (h < 10) {
			string meridianHour = zero += to_string(h);

			return meridianHour;
		}
		else
		{
			string meridianHour = to_string(h);

			return meridianHour;
		}

	}
}


string formatTime(int n)
{
	string stringTime = "0";
	if (n < 10)
	{
		stringTime = stringTime += to_string(n);
	}
	else
	{
		stringTime = to_string(n);
	}
	return stringTime;
}

int maxHour(int userHours)
{
	if (userHours >= 24)
	{
		userHours = 0;
		return userHours;
	}
	else
	{

		return userHours;
	}
}

int maxMinute(int userMinute)
{
	if (userMinute >= 60)
	{
		userMinute = 0;
		return userMinute;
	}
	else
	{

		return userMinute;
	}
}

int maxSecond(int userSecond)
{
	if (userSecond >= 60)
	{
		userSecond = 0;
		return userSecond;
	}
	else
	{

		return userSecond;
	}
}