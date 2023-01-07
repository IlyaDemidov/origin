#include "Centavr.h"

Centavr::Centavr(double dist, const std::string& str)
{
	this->name = str;

	double dist_no_pause = dist / 15;
	int count_pause = (static_cast<int> (dist_no_pause) / 8) * 2;

	this->race_time = dist_no_pause + count_pause;
}