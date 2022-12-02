// Q4-GardeRanking.cpp : This is the solution for
//                       Quize 4 of Computer programming Courses
//                       Ranking Grades:
//                                      20 -> A+
//                                   17-20 -> A
//                                   15-17 -> B
//                                   10-15 -> C
//                                    0-10 -> F
//
// Mehrdad Khadivi
// UCNA - mabani
// 14010906

#include <iostream>
using namespace std;

int main()
{
    double grade;

    cout << "Enter Your grade:";
    cin >> grade;

    if (grade == 20)
        cout << "Your Rank is A+";
    else if (17 <= grade && grade < 20)
        cout << "Your Rank is A";
    else if (15 <= grade && grade < 17)
        cout << "Your Rank is B";
    else if (10 <= grade && grade < 15)
        cout << "Your Rank is C";
    else if (0 <= grade && grade < 10)
        cout << "Your Rank is F";
    else
        cout << "invalid Grade";

    cout << endl;
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
