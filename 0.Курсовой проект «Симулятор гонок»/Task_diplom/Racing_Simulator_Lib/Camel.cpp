#include "Camel.h"

Camel::Camel(double dist, const std::string& str)
{
	this->name = str;

	double dist_no_pause = dist / 10;
	int count_pause = (static_cast<int> (dist_no_pause) / 30);

	if (count_pause >= 1) count_pause = ((count_pause - (count_pause - 1)) * 5) + ((count_pause - 2) * 8);


	this->race_time = dist_no_pause + count_pause;
}