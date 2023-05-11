#include <iostream>
#include <queue>

using namespace std;

queue<int> qu;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) qu.push(i);

    while (qu.size() > 1)
    {
        qu.pop();
        qu.push(qu.front());
        qu.pop();
    }

    cout << qu.front();

    return 0;
}
