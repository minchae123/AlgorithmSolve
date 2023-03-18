#include <iostream>
#include <string>

using namespace std;

int main()
{
	int r = 0;
    string a;
    cin >> a;

    for (int i = 0; i < a.length(); i++) {
        switch (a.at(i)) {
        case 'A':
        case 'B':
        case 'C':
            r += 3;
            break;
        case 'D':
        case 'E':
        case 'F':
            r += 4;
            break;
        case 'G':
        case 'H':
        case 'I':
            r += 5;
            break;
        case 'J':
        case 'K':
        case 'L':
            r += 6;
            break;
        case 'M':
        case 'N':
        case 'O':
            r += 7;
            break;
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            r += 8;
            break;
        case 'T':
        case 'U':
        case 'V':
            r += 9;
            break;
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            r += 10;
            break;
        }
    }
	cout << r;
}