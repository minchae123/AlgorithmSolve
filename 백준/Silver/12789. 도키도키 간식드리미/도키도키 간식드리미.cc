#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); 
	cin.tie(0);

	int n, a, turn = 1;
	cin >> n;
	stack<int> st;
	
	for (int i = 0; i < n; i++)
	{
		cin >> a;

		if (a == turn) turn++;
		else st.push(a);

		while (!st.empty() && st.top() == turn)
		{
			st.pop();
			turn++;
		}
	}

	if (st.empty()) cout << "Nice";
	else cout << "Sad";
}