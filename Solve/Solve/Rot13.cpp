#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin, str);

	for (int i = 0; i < str.length(); i++)
	{
		if (((int)str[i] >= 65 && (int)str[i] <= 90))
		{
			if ((int)str[i] + 13 > 90)
			{
				cout << char((str[i] + 13) - 90 + 64);
			}
			else
			{
				cout << char(str[i] + 13);
			}
		}
		else if (((int)str[i] >= 97 && (int)str[i] <= 122))
		{
			if ((int)str[i] + 13 > 122)
			{
				cout << char((str[i] + 13) - 122 + 96);
			}
			else
			{
				cout << char(str[i] + 13);
			}
		}
		else
		{
			cout << str[i];
		}
	}
}