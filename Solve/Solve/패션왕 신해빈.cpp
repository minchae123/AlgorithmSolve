#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		unordered_map<string, int> map;
		int m;
		string item, cate;
		cin >> m;
		for (int i = 0; i < m; i++)
		{
			cin >> item >> cate;
			map[cate]++;
		}
		int answer = 1;
		for (auto a: map)
		{
			answer *= a.second + 1;
		}
		cout << answer - 1 << endl;
	}
}