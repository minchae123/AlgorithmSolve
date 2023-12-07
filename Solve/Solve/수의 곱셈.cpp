#include <iostream>

using namespace std;

int main()
{
	int answer = 1;
	int num[3] = { 0 };

	for (int i = 0; i < 3; i++)
	{
		cin >> num[i];

		if (num[i] % 2 != 0)
		{
			answer *= num[i];
		}
	}

	if (answer == 1)
	{
		for (int i = 0; i < 3; i++)
		{
			answer *= num[i];
		}
	}

	cout << answer;
}