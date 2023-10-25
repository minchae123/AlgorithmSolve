#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int o = 0;
    int e = 0;
    for(auto a : num_list)
    {
        if(a % 2 == 0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    answer.push_back(e);
    answer.push_back(o);
    return answer;
}