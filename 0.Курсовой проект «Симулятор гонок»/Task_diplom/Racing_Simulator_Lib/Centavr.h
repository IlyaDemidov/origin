#pragma once

#include "Transport.h"


class Centavr : public Transport
{
public:
	RACING_API Centavr(double dist = 1, const std::string& name = "�������");
	virtual ~Centavr() = default;

private:

};