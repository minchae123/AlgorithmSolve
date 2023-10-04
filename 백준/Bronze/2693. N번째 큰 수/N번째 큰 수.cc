#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v;
	int m;
	cin >> m;
	
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			int a;
			cin >> a;
			v.push_back(a);
		}
		sort(v.begin(), v.end());
		cout << v[7] << endl;
		v.clear();
	}
}