#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str, find, answer = "";
    cin >> str >> find;

    for (int i = 0; i < str.size(); ++i)
    {
        answer += str[i];
        if (answer.size() >= find.size())
        {
            bool flag = true;
            for (int j = 0; j < find.size(); ++j)
            {
                if (answer[answer.size() - find.size() + j] != find[j])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                answer.erase(answer.end() - find.size(), answer.end());
        }
    }


    if (answer == "")
        cout << "FRULA";
    else
        cout << answer;

    return 0;
}