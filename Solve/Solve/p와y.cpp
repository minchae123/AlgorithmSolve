#include <iostream>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int p = 0, y = 0;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'p')
			p++;
		if (s[i] == 'y')
			y++;
	}

	if (p == y) cout << "true";
	else cout << "false";
}