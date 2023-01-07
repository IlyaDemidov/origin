#pragma once

#include "Transport.h"

class Camel : public Transport
{
public:
	RACING_API Camel(double dist = 1, const std::string& name = "Верблюд");
	virtual ~Camel() = default;

private:

};