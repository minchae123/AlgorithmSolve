#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a + b + c != 180)
	{
		cout << "Error";
		return 0;
	}

	if (a == 60 && b == 60 && c == 60)
	{
		cout << "Equilateral";
		return 0;
	}

	if (a == b || a == c)
	{
		cout << "Isosceles";
		return 0;
	}
	else if (b == c)
	{
		cout << "Isosceles";
		return 0;
	}
	else
	{
		cout << "Scalene";
		return  0;
	}
}