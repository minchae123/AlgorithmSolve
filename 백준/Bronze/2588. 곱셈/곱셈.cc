#include <iostream>

using namespace std;
int main() {
	int a, b;
	cin >> a >> b;

	int c = 0, d = 0, e = 0;
	c = b / 100;
	d = (b - (c * 100)) / 10;
	e = b % 10;
	cout << a * e << endl;
	cout << a * d << endl;
	cout << a * c << endl;
	cout << a * b;
}