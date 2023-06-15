#include<iostream>
#include <map>

using namespace std;

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<string, int> a;
    int n, m;
    cin >> n >> m;
    string str;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        a[str]++;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> str;
        if (a[str] == 1) cnt ++;
        a[str]++;
    }

    cout << cnt << '\n';
    for (auto i : a)
    {
        if (i.second >= 2)
        {
            cout << i.first<<"\n";
        }
    }
    return 0;
}