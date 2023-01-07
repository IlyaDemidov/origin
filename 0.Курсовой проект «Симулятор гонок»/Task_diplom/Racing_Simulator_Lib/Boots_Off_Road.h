#pragma once

#include "Transport.h"


class Boots_Off_Road : public Transport
{
public:
	RACING_API Boots_Off_Road(double dist = 1, const std::string& name = "Ботинки-вездеходы");
	virtual ~Boots_Off_Road() = default;

private:

};