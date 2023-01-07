#include "Eagle.h"

Eagle::Eagle(double dist, const std::string& str)
{
	this->name = str;
	this->race_time = (dist * 0.94 )/ 8;
}

