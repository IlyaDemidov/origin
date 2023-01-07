#pragma once

#ifdef RACING_LIB_EXPORTS
#define RACING_API __declspec(dllexport)
#else
#define RACING_API __declspec(dllimport)
#endif


#include <iostream>

class Transport
{
public:
	RACING_API Transport(double dist = 1, const std::string& name = "Транспорт");
	virtual ~Transport() = default;

	RACING_API const std::string& get_name() const;
	RACING_API const double& get_race_time() const;

	RACING_API bool operator < (const Transport& x) const;

protected:
	std::string name;
	double race_time;



};

