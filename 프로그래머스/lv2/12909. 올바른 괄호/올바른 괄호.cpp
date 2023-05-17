#include<string>
#include <iostream>
#include <stack>

using namespace std;
bool solution(string s)
{
    stack<int> ss;
    bool answer = true;
    for(int i =0;i<s.length();i++){
        if(s[i] == '('){
            ss.push('(');
        }
        else{
            if(!ss.empty()&&s[i]==')'){
                ss.pop();
            }
            else{
                return false;
            }
        }
    }

    return answer && ss.empty();
}