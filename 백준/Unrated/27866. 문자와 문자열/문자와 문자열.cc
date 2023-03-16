#include <iostream>
#include <string>

using namespace std;
int main() {
	string a;
  	int n;
	cin >> a;
	cin >> n;
	cout << a.substr(n-1, 1);
}