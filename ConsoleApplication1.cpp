// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Mehrdad Khadivi
UCNA - mabani
14010821
*/

#include <iostream>

using namespace std;

int main()
{
    char flag;

    do
    {
        
        cout << "enter type:";
        cin >> flag;

        if ((flag != 'f') && (flag != 'c'))
            cout << "type in unknown" << endl;

    } while ((flag != 'f') && (flag != 'c'));
    /*{
        cout << "type in unknown" << endl;
        cout << "enter type:";
        cin >> flag;
    }*/

    switch (flag)
    {
    case 'c':
    {
        double degree;
        cout << "enter degree:";
        cin >> degree;

        cout << "in f:";
        cout << degree * 1.8 + 32;

        break;
    }
    case 'f':
    {
        double degree;
        cout << "enter degree:";
        cin >> degree;

        cout << "in c:";
        cout << (degree - 32) / 1.8;

        break;
    }
    default:
    {
        cout << "type in unknown";
        break;
    }
    }





  //  cin >/*> c;

   // double F = 0;

   // F = c * 1.8 + 32;

   // cout << F;*/

    return 0;
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
