#include <iostream>
#include <stack>

using namespace std;

int main() {
	int n, cnt =0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string ss;
		cin >> ss;

		stack<char> s;

		for (int j = 0; j < ss.length(); j++) {
			if (!s.empty() && s.top() == ss[j]) {
				s.pop();
			}
			else {
				s.push(ss[j]);
			}
		}
		if (s.empty()) cnt++;
	}
	cout << cnt;
}