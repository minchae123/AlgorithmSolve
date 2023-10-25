#include <string>
#include <vector>

using namespace std;

int solution(string message) {
    int answer = 0;
    for(auto a : message)
    {
        answer++;
    }
    return answer * 2;
}