#include <iostream>

using namespace std;

int main()
{
	int n, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] == '7')
				cnt++;
		}
	}

	cout << cnt;
}