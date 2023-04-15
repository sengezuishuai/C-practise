#define _CRT_SECURE_NO_WARNINGS
#include"all.h"
Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int h, int m = 0)
{
	this->hours = h;
	this->minutes = m;
}

