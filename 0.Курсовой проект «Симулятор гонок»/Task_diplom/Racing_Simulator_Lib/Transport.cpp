#include "Transport.h"

Transport::Transport(double dist, const std::string& _name)
{
	this->name = _name;
	this->race_time = 0;
	
}

const std::string& Transport::get_name() const
{
	return name;
}

const double& Transport::get_race_time() const
{
	return race_time;
}

bool Transport:: operator < (const Transport& x) const
{
	return this->get_race_time() < x.get_race_time();
}