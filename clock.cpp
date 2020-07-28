#include "clock.h"
#include <iostream>

using namespace std;

bool clock::equalTime(const clock& otherClock) const
{
    return (hr == otherClock.hr && min == otherClock.min && sec == otherClock.sec);
}
