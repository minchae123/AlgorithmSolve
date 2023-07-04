#include <iostream>

using namespace std;

int main()
{
	int x, y;
	int m;
	int bottle[4] = { 0,1,2,3 };

	cin >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> x >> y;
		swap(bottle[x], bottle[y]);
	}

	for (int i = 1; i < 4; i++)
	{
		if (bottle[i] == 1)
		{
			cout << i;
		}
	}
}