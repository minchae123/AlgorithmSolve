#include <string>
#include <stack>

using namespace std;

int solution(string s) {
    int answer = 0;
    for (int i = 0; i < s.length(); ++i) {
        stack<char> st;
        bool r = false;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '[' || s[i] == '{' || s[i] == '(') {
                r = true;
                st.push(s[i]);
            }
            else {
                if (s[i] == ']' && st.top() == '[')
                    st.pop();
                if (s[i] == '}' && st.top() == '{')
                    st.pop();
                if (s[i] == ')' && st.top() == '(')
                    st.pop();
            }
        }
        if (st.empty() && r) answer++;

        char ch = s.front();
        s.erase(s.begin());
        s.push_back(ch);
    }
    return answer;
}