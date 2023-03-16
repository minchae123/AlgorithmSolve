#include <iostream>
#include <string>

using namespace std;
int main() {
	char n[5][15] = { 0 };
	
	for (int i = 0; i < 5; i++) {
		cin >> n[i];
	}
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
            if(n[j][i] ==0) continue;
			cout << n[j][i];
		}
	}
}
