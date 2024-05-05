#include <iostream>
#include <string>

using namespace std;

int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string s, p;
	cin >> s >> p;

	bool answer = false;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == p[0])
		{
			for (int j = 0; j < p.length(); j++)
			{
				if (s[i + j] == p[j])
				{
					if (j == p.length() - 1)
					{
						answer = true;
						break;
					}
				}
				else 
				{
					answer = false;
					break;
				}
			}

			if (answer)
				break;
		}
		else
		{
			answer = 0;
		}
	}

	cout << answer;
}