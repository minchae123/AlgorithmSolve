#include <iostream>

using namespace std;
int dp[10000001] = { 0.1,1 };
int main()
{
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2] + 1;
	}
	cout << dp[n];
}