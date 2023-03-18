#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a[9][9] = {};
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> a[i][j];
		}
	}
	int max = 0, x = 0, y = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (a[i][j] >= max) {
				max = a[i][j];
				x = i + 1;
				y = j + 1;
			}
		}
	}
	cout << max << endl << x << " " << y;
}