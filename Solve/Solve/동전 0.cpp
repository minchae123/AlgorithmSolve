#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, k, cnt = 0;
	vector<int> coins;
	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		coins.push_back(a);
	}

	for (int i = n - 1; i >= 0; i--)
	{
		if (k > coins[i])
		{
			cnt = k / coins[i];
			k %= coins[i];
		}

		if (k == 0)
			break;
	}

	cout << cnt;
}
