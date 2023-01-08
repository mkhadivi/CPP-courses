// ClassTime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Time.h"

using namespace std;

class TimeZone : private Time
{
private :
    string name;
public :
    TimeZone(string n, int h, int m, int s) :Time(h, m, s)
    {
        name = n;
    }

    void TZshow()
    {
        cout << "TimeZone: " << name;
        Show();
    }
};





int main()
{
    Time t1 = Time(3, 33, 40);
    Time t2 = Time(3, 30, 00);

    Time t3 = t1 + t2;

    int m = 0;

  //  TimeZone tehran("Tehran", 2, 30, 45);

  //  tehran.TZshow();

   //Ti/*me t(5, 20, 10);

  //  t.Show();

  //  t.universalTime();

  //  Time t2(1, 2, 3);

  //  t*/2.universalTime();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
