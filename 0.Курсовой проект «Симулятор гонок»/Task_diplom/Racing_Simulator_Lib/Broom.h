#pragma once

#include "Transport.h"


class Broom : public Transport
{
public:
	RACING_API Broom(double dist = 1, const std::string& name = "Метла");
	virtual ~Broom() = default;

private:

};