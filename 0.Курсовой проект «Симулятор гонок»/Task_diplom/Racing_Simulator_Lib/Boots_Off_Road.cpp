#include "Boots_Off_Road.h"

Boots_Off_Road::Boots_Off_Road(double dist, const std::string& str)
{
	this->name = str;

	double dist_no_pause = dist / 6;
	int count_pause = (static_cast<int> (dist_no_pause) / 60);

	if (count_pause >= 1) count_pause = ((count_pause - (count_pause - 1)) * 10) + ((count_pause - 1) * 5);

	this->race_time = dist_no_pause + count_pause;
}