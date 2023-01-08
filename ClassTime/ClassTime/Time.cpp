#include "Time.h"
#include <iostream>

using namespace std;

int Time::u_h = 0;
int Time::u_m = 0;
int Time::u_s = 0;


Time::Time(int h = 0, int m = 0, int s = 0)
{
    SetHour(h);
    SetMin(m);
    SetSec(s);

}

Time::~Time()
{
    cout << "This is the end!" << endl;
}

void Time::Show()
{
    cout << hour << " : " << minute << " : " << second << endl;
}

void Time::SetHour(int h)
{
    if (0 <= h && h <= 24)
        hour = h;
    else
        h = 0;
}

int Time::GetHour()
{
    return hour;
}

void Time::SetMin(int m)
{
    if (0 <= m && m <= 60)
        minute = m;
    else
        m = 0;
}

int Time::GetMin()
{
    return minute;
}

void Time::SetSec(int s)
{
    if (0 <= s && s <= 60)
        second = s;
    else
        second = 0;
}

int Time::GetSec()
{
    return second;
}


void Time::universalTime()
{
    

    cout << u_h << " : " << u_m << " : " << u_s << endl;

}