#include <iostream>
using namespace std;

int Fibo(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return Fibo(n - 1) + Fibo(n - 2);
}


int main()
{
	int n = 0;
	cin >> n;

	cout << Fibo(n) << endl;
}