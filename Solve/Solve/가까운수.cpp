#include <iostream>

using namespace std;

int main()
{
	int n, k, check = INT_MAX;
	cin >> n >> k;
	
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int  a;
        cin >> a;
        if (abs(a - k) < check)
        {
            ans = a;
        }
	}
	cout << ans;
}