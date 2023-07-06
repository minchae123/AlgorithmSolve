#include <iostream>
using namespace std;

int main()
{
	int A, B, V;
	int day;
	cin >> A >> B >> V;

	if (V <= A) day = 1;
	else {
		V -= A;
		if (V % (A - B)) day = V / (A - B) + 2;
		else day = V / (A - B) + 1;
	}

	cout << day;
}