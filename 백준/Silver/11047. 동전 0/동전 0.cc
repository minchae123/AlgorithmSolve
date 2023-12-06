#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, money, cnt = 0;
    vector<int> coins;
    cin >> n >> money;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        coins.push_back(a);
    }

    while (money)
    {
        for (int i = 0; i < coins.size(); ++i)
        {
            if (money < coins[i])
            {
                money -= coins[i - 1];
                ++cnt;
                break;
            }
            else if (i == coins.size() - 1)
            {
                money -= coins[i];
                ++cnt;
                break;
            }
        }
    }

    cout << cnt;
}