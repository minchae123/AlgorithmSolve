#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, a, time = 0;
	vector<int> p;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		p.push_back(a);
	}

	sort(p.begin(), p.end());

	for (int i = 0; i < n; i++)
	{
		time += p[i] * (n - i);
	}

	cout << time;
}