#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, money, cnt = 0;
	vector<int> coins;
	cin >> n >> money;

	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		coins.push_back(a);
	}

	for (int i = n - 1; i >= 0; i--)
	{
		if (money - coins[i] >= 0)
		{
			cnt = money / coins[i];
			money %= coins[i];
		}
		if (money == 0) break;
	}

	cout << cnt;
}