#pragma once

#include "Transport.h"


class Eagle: public Transport
{
public:
	RACING_API Eagle(double dist = 1, const std::string& name = "Îð¸ë");
	virtual ~Eagle() = default;

private:
	
};
