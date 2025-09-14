// Standard C++ headers
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c;
	float X;
	cout << "Enter the value of a, b, c respectively: ";
	cin >> a >> b >> c;

	X = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

	cout << "\nThe value of X is: " << X;
	return 0;
}