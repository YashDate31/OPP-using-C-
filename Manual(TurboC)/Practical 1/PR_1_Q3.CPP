// Standard C++ headers
#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cout << "Enter the Two numbers: ";
	cin >> x >> y;

	(x > y) ? cout << "\nThe larger no is: " << x : cout << "\nThe larger no is: " << y;

	return 0;
}