#include "Camel_Fast.h"

Camel_Fast::Camel_Fast(double dist, const std::string& str)
{
	this->name = str;

	double dist_no_pause = dist / 40;
	int count_pause = (static_cast<int> (dist_no_pause) / 10);
	double pause = count_pause;

	if (count_pause >= 1 && count_pause <= 2) pause = ((pause - (pause - 1)) * 5) + ((pause - 1) * 6.5);
	if (count_pause >= 3 ) pause = ((pause - (pause - 1)) * 5) + ((pause - (pause - 1)) * 6.5) + ((pause - 2) * 8);

	this->race_time = dist_no_pause + pause;
}