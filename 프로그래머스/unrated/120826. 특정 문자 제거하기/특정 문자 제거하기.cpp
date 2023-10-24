#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter)
{
	string answer = my_string;

	for (int i = 0; i < answer.length(); i++)
	{
		if (answer[i] == letter[0])
		{
			answer.erase(answer.begin() + i);
            i--;
		}
	}
    return answer;
}