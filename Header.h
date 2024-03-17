#pragma once
#pragma once
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

int main();

void clockDisplay(string meridianHour, string formatHour, string formatMinute, string formatSecond);

void menuDisplay();

string makeMeridianHour(int);


std::string formatTime(int);
int maxHour(int);
int maxMinute(int);
int maxSecond(int);




