#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
using namespace std;

int cnt = 0;
char str[1001];
int recursion(const char* s, int l, int r);
int isPalindrome(const char* s);

int main() {
	int N;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cnt = 0;
		cin >> str;
		cout << isPalindrome(str) << " " << cnt << '\n';
	}
}

int recursion(const char* s, int l, int r) {
	cnt++;
	if (l >= r) return 1;
	else if (s[l] != s[r]) return 0;
	else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
	return recursion(s, 0, strlen(s) - 1);
}