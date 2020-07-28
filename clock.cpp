#include "clock.h"
#include <iostream>

using namespace std;

void clock::setTime(int hour, int minutes, int seconds)
{
    hr = hour;
    min = minutes;
    sec = seconds;
}

