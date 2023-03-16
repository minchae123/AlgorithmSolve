#include <iostream>
#include <string>

using namespace std;

int main()
{
    int cnt;
    cin >> cnt;
    string st;
    for (int i = 0; i < cnt; i++)
    {
        char a = 0;
        cin >> a;
        st.push_back(a);
    }
    int sum = 0;
    for (int i = 0; i < st.length(); i++) {
        sum += (int)st[i] - 48;
    }
    cout << sum;
}