// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//A program to find the roots of a quadratic equation.
#include <iostream>
#include <cmath>
#include <iostream>
void getroots(float, float, float, float&, float&);
using namespace std;
int main()
{
	float a, b, c, x1, x2;
	cout << "Enter the value of a, b and c" << endl;
	cin >> a >> b >> c;
	cout << endl;
	getroots(a, b, c, x1, x2);
	return 0;
}
void getroots(float a, float b, float c, float& x1, float& x2)
{
	
	float discriminant = (b * b) - (4 * a * c);
	cout << "The discriminant is " << discriminant << endl;
	cout << endl;
	if (discriminant > 0)
	{
		x1 = (-b + sqrt(discriminant)) / (2 * a);
		x2 = (-b - sqrt(discriminant)) / (2 * a);
		cout << "The roots are real and different" << endl;
		cout << "The roots are " << x1 << " and " << x2 << endl;
	}
	else if (discriminant == 0)
	{
		x1 = -b / (2 * a);
		cout << "The roots are real and same" << endl;
		cout << "The roots are " << x1 << " and " << x1 << endl;
	}
	else
	{
		x1 = -b / (2 * a);
		x2 = sqrt(-discriminant) / (2 * a);
		cout << "The roots are imaginary and different" << endl;
		cout << "The roots are " << x1 << " + i" << x2 << " and " << x1 << " - i" << x2 << endl;
	}
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
