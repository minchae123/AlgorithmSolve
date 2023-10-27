#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> maple;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string st;
        cin >> st;
        maple[st]++;
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        maple.erase(a);
    }
    cout << maple.size() << endl;

    for (auto i : maple)
    {
        if (i.second == 0) continue;
        cout << i.first << endl;
    }
    return 0;
}