// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Mehrdad Khadivi
UCNA - mabani
14010821
*/

#include <iostream>
#include <cmath>

using namespace std;

class Circle
{
	double r;
	int x;
	int y;

public:

	const void greating()
	{
		int a = 1;
		cout << a << endl;
	}

	Circle()
	{
		r = 0;
		x = 0;
		y = 0;
	}

	Circle(double rr, int xx, int yy)
	{
		Setr(rr);
		x = xx;
		y = yy;
	}

	void Setr(double rr)
	{
		if (rr >= 0)
			r = rr;
		else
			cout << "r can not be negative";
	}

	double getr()
	{
		return r;
	}
	
	void Area()
	{
		cout << r * r * 3.14 << endl;
	}

	void Round()
	{
		cout << 2 * r * 3.14 << endl;
	}
};

int main()
{
	

	double r;
	int x;
	int y;

	cout << "enter r: ";
	cin >> r;
	cout << "enter x: ";
	cin >> x;
	cout << "enter y: ";
	cin >> y;

	Circle c1 = Circle(r, x, y);
	
	//c1.Setr(r);
	// 
	//cout << c1.getr() << endl;
	//c1.x = x;
//	c1.y = y;

	//c1.Area();

	//c1.Round();

	c1.greating();

	Circle c2;

	c2.greating();


	//Circle.greating();




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
