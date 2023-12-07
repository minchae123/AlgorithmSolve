#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, b;
    cin >> n >> b;

    vector<pair<int, int>> price;  

    for (int i = 0; i < n; i++) {
        int z, x;
        cin >> z >> x;
        price.push_back(make_pair(z, x));
    }

    sort(price.begin(), price.end()); 

    int student = 0;
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        if (price[i].first / 2 + price[i].second <= b - total) 
        {
            total += price[i].first / 2 + price[i].second;
            student++;
        }
        else 
            break;
    }
    cout << student << endl;
}
