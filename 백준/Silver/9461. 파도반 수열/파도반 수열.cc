#include <iostream>
using namespace std;
long long nums[1000001] = { 0,1,1,1 };
int main() 
{
    int t;
    int n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;

        for (int j = 4; j <= n; j++)
        {
            nums[j] = nums[j - 3] + nums[j - 2];
        }

        cout << nums[n] << endl;
    }
}