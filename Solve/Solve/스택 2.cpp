#include<iostream>
#include<stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, a, num;
	stack<int> stack;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		switch (a) {
		case 1:
			cin >> num;
			stack.push(num);
			break;
		case 2:
			if (!stack.empty()) {
				cout << stack.top() << endl;
				stack.pop();
			}
			else cout << "-1" << endl;
			break;
		case 3:
			cout << stack.size() << endl;
			break;
		case 4:
			if (stack.empty()) cout << endl;
			else cout << "0" << endl;
			break;
		case 5:
			if (!stack.empty()) cout << stack.top() << endl;
			else cout << "-1" << endl;
			break; 
		}
	}
	return 0;
}