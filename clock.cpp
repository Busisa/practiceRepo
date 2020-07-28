#include "clock.h"
#include <iostream>

using namespace std;

void clock::incrementMinutes()
{
    min++;
    if (min > 59)
    {
        min = 0;
        incrementHours(); //increment hours
    }
}
