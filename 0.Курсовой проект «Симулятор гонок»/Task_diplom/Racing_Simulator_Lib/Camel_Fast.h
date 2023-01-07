#pragma once

#include "Transport.h"

class Camel_Fast : public Transport
{
public:
	RACING_API Camel_Fast(double dist = 1, const std::string& name = "Верблюд-быстроход");
	virtual ~Camel_Fast() = default;

private:

};