#include <iostream>
using namespace std;
long long int F(int n) {
    if (n <= 1)
        return 1;
    return n * F(n - 1);
}
int main() {
    int n;
    cin >> n;
    long long int a = F(n);
    cout << a;
}