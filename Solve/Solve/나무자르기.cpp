#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> tree;
long long Search(long long n, long long m)
{
	long long left = 1, right = n, cutting = 0, sum;
	while (left <= right)
	{
		sum = 0;
		cutting = (left + right) / 2;
		for (auto t : tree)
		{
			if (t > cutting)
				sum += t - cutting;
		}

		if (sum == m)
			return cutting;
		if (sum > m)
			left = cutting + 1;
		else
			right = cutting - 1;
	}

	if (sum < m)
		return cutting - 1;
	else
		return cutting;
}

int main()
{
	long long n, m;
	cin >> n >> m;
	tree.resize(n);
	for (long long i = 0; i < n; i++)
	{
		cin >> tree[i];
	}
	sort(tree.begin(), tree.end());
	cout << Search(tree.back(), m);
}