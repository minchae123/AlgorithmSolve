#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int n, cnt = 0, last = 0;
	vector<pair<int, int>> v;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		v.push_back({ b,a });
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++)
	{
		if (last > v[i].second)
			continue;
		cnt++;
		last = v[i].first;
	}

	cout << cnt;
}