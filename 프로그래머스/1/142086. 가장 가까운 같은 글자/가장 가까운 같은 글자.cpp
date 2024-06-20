#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) 
{    
    vector<int> answer;
    int a;
    
    for( int i = 0; i < s.length(); i++)
    {
        a = -1;
        for(int j = 0; j < i; j ++)
        {
            if( s[i] == s[j])
                a = i - j;
        }
        answer.push_back(a);
        
    }
    return answer;
    
    return answer;
}