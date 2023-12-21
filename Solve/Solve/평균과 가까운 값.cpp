#include <iostream>
#include <vector>
using namespace std;

int main()
{
	for (int j = 0; j < 9; j++)
	{
		int a, sum = 0, avg = 0, mid = INT_MAX, ans = 0;
		vector<int> v;

		for (int i = 0; i < 9; i++)
		{
			cin >> a;
			sum += a;
			v.push_back(a);
		}
		
		avg = round(sum / 9.f);

		for (int i = 0; i < 9; i++)
		{
			if (abs(avg - v[i]) < mid)
			{
				mid = abs(avg - v[i]);
				ans = v[i];
			}
		}

		cout << avg << " " << ans << endl;
	}
}
