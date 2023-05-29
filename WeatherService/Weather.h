#pragma once
#include <string>
#include <vector>

using namespace std;

class Weather
{
private:
	std::string city; //  Киров
	double lon; // 49.6601
	double lat; // 58.5966
	double temperature; // 5.69
	std::string weather; // дождь
	double windSpeed; // 4.27
	int clouds; // 100

public:
	Weather(){
		city = "Kirov";
		lon = 49.6601;
		lat = 58.5966;
		temperature = 5.69;
		weather = "rain";
		windSpeed = 4.27;
		clouds = 100;
	}
};

