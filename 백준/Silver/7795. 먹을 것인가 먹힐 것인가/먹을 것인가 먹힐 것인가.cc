#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int t;
	cin >> t;
	int a, b;
	int count = 0;
	for (int i = 0; i < t; i++)
	{
		vector<int> aa, bb;
		count = 0;
		cin >> a >> b;
		for (int j = 0; j < a; j++)
		{
			int q;
			cin >> q;
			aa.push_back(q);
		}
		for (int j = 0; j < b; j++)
		{
			int q;
			cin >> q;
			bb.push_back(q);
		}

		sort(bb.begin(), bb.end());

		for (auto a : aa)
		{
			count += lower_bound(bb.begin(), bb.end(), a) - bb.begin();
		}

		cout << count << '\n';
	}
}