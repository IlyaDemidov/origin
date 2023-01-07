#pragma once

#include "Transport.h"


class Centavr : public Transport
{
public:
	RACING_API Centavr(double dist = 1, const std::string& name = "Кентавр");
	virtual ~Centavr() = default;

private:

};