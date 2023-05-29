#pragma once
#include <string>
#include "Weather.h"

using namespace std;

class Service
{
	virtual Weather getWeather(std::string s) = 0;

};

