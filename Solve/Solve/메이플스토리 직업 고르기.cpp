#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> list;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string st;
        cin >> st;
        list[st]++;
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        list.erase(a);
    }
    cout << list.size() << endl;

    for (auto i : list)
    {
        if (i.second == 0) continue;
        cout << i.first << endl;
    }
    return 0;
}