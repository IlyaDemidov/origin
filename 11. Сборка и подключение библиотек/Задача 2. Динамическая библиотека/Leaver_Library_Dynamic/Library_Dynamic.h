#pragma once

#ifdef LEAVER_LIBRARY_DYNAMIC_EXPORTS
#define LEAVER_LIBRARY_DYNAMIC_API __declspec(dllexport)
#else
#define LEAVER_LIBRARY_DYNAMIC_API __declspec(dllimport)
#endif

#include <iostream>

class Leaver
{
public:
	Leaver() {};

	LEAVER_LIBRARY_DYNAMIC_API std::string leave(std::string str);


private:

};