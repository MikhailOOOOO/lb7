// WeatherService.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "json.hpp"
#include "Weather.h"
#include <iostream>
#include "JsonService.h"

int main()
{
    JsonService js;
    Weather w = js.getWeather("weather.json");

    std::cout << "Hello World!\n";
}

