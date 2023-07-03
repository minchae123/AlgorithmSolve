#include <iostream>

using namespace std;

int main()
{
    int x, y, z, temp;
    cin >> x >> y;
    int array[x];

    for (int i = 0; i < x; i++)
        array[i] = i+1;

    for (int i = 0; i < y; i++)
    {
        cin >> temp >> z;
        swap(array[temp-1], array[z-1]);
    }

    for (int i = 0; i < x; i++)
        cout << array[i] << ' ';
}