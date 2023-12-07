#include <iostream>
#include <vector>
using namespace std;

int nums[100000001];
vector<int> numss;

int Fibo(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return Fibo(n - 1) + Fibo(n - 2);
}

int Fiboo(int n)
{
	if (numss[n] != 0)
		return numss[n];

	if (n == 1 || n == 2)
	{
		numss[n] = 1;
		return numss[n];
	}
	else
	{
		numss[n] = Fiboo(n - 1) + Fiboo(n-2);
		return numss[n];
	}
}


int main()
{
	int n = 0;
	numss.resize(100000001, 0);
	cin >> n;

	cout << Fibo(n) << endl;

	nums[1] = 1;
	nums[2] = 1;

	for (int i = 3; i <= n; i++)
	{
		nums[i] = nums[i - 1] + nums[i - 2];
	}

	cout << nums[n] << endl;

	cout << Fiboo(n) << endl;
}