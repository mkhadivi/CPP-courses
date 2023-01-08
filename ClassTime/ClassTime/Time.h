#ifndef TIME_H
#define TIME_H

class Time
{
private:
    int hour;
    int minute;
    int second;

    static int u_h;
    static int u_m;
    static int u_s;


public:
    Time(int, int, int);

    ~Time();

    Time operator +(Time T)
    {
        Time res = Time(0,0,0);
        res.hour = hour + T.hour;
        res.minute= minute + T.minute;
        res.second = second + T.second;

        return res;
    }

    static void universalTime();

    void Show();

    void SetHour(int h);

    int GetHour();

    void SetMin(int m);

    int GetMin();

    void SetSec(int s);

    int GetSec();
};


#endif // !TIME_H




