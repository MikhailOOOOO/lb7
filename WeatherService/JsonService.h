#pragma once
#include "Service.h"
#include <fstream>
#include "json.hpp"
#include <exception>

using namespace std;
using nlohmann::json;

class JsonService :
    public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService() {};

};

