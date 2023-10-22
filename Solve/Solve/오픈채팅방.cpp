#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> record) {
    map<string, string> idname;
    vector<pair<string, string>> log;
    vector<string> answer;
    string state, id, name;

    for (auto s : record)
    {
        stringstream stream(s);
        stream >> state; stream >> id; stream >> name;

        if (state == "Enter")
        {
            if (idname.find(id) == idname.end())
            {
                idname.insert(make_pair(id, name));
            }
            log.push_back(make_pair(id, state));
            idname[id] = name;
        }
        else if (state == "Leave")
        {
            log.push_back(make_pair(id, state));
        }
        else if (state == "Change")
        {
            idname[id] = name;
        }
    }

    for (int i = 0; i < log.size(); ++i)
    {
        answer.push_back(idname[log[i].first] + "님이 ");
        answer[i] += log[i].second == "Enter" ? "들어왔습니다." : "나갔습니다.";
    }
    return answer;
}