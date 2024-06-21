#include <iostream>

using namespace std;

int main()
{
	int a, b, aa, bb;
	cin >> a >> b;

	aa = ((a % 10) * 100) + ((a / 10) % 10) * 10 + (a / 100);
	bb = ((b % 10) * 100) + ((b / 10) % 10) * 10 + (b / 100);

	int ans = aa > bb ? aa : bb;

	cout << ans;
}