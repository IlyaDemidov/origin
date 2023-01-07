#include "Broom.h"

Broom::Broom(double dist, const std::string& str)
{
	this->name = str;

	double kof{ 0 };
	int d = static_cast<int>(dist) / 1000;

	d == 0 ? kof = 0.99 : kof = d;

	this->race_time = (dist * (1 - (kof*0.01))) / 20;
}
