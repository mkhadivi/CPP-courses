// Roll Dice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>

using namespace std;

int Dice()
{
    
    int r = rand() % 6 + 1;

    cout << r;
    return r;
}

int main()
{
    srand(time(NULL));

    int p1 = Dice();
    int p2 = Dice();

    if (p1 > p2)
        cout << "palyer 1 wins!";
    else if (p1 < p2)
        cout << "palyer 2 wins!";
    else
        cout << "Draw!";

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
