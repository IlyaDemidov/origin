#pragma once

#include "Transport.h"


class Magic_Carpet : public Transport
{
public:
	RACING_API Magic_Carpet(double dist = 1, const std::string& name = "Ковёр-самолёт");
	virtual ~Magic_Carpet() = default;

private:

};