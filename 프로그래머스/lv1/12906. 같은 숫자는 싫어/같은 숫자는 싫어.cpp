#include <vector>
#include <iostream>
#include <queue>

using namespace std;

vector<int> solution(vector<int> arr)
{
    queue<int>q;
    vector<int> answer;

    for (int i = 0; i < arr.size(); i++)
    {
        if (!q.empty() && arr[i] == q.back()) continue;
        else q.push(arr[i]);

    }
    while (!q.empty())
    {
        answer.push_back(q.front());
        q.pop();
    }
    return answer;
}