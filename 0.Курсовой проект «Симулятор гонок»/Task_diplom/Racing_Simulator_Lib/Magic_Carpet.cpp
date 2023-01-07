#include "Magic_Carpet.h"

Magic_Carpet::Magic_Carpet(double dist, const std::string& str)
{
	this->name = str;

	double kof{ 0 };
	if (dist < 1000) kof = 1;
	if (dist > 1000 && dist < 5000) kof = 0.97;
	if (dist > 5000 && dist < 10000) kof = 0.9;
	if (dist >= 10000) kof = 0.95;

	this->race_time = (dist * kof) / 10;
}

