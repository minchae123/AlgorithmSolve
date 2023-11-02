#include <iostream>
#include <set>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;

	set<string> s;
	string name, state;

	for (int i = 0; i < n; i++)
	{
		cin >> name >> state;

		if (state == "enter")
		{
			s.insert(name);
		}	
		else
		{
			s.erase(name);
		}
	}
	for (auto i = s.rbegin(); i != s.rend(); i++)
	{
		cout << *i << '\n';
	}
}