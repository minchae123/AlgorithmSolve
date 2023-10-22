#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{

}

int solution(vector<vector<int>> maps)
{
	int dx[4] = {1,0,-1,0};
	int dy[4] = {0,1,0,-1};
	int h = maps.size();
	int v = maps[0].size();

	queue<pair<int, int>> q;
	vector<vector<int>> visited;

	visited.resize(h, vector<int>(v, -1));

	q.push({ 0,0, });
	visited[0][0] = 1;

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = dx[i] + x;
			int ny = dy[i] + y;
			if (nx < 0 || ny < 0 || nx >= v || ny >= h)
			{
				continue;
			}

			if (visited[nx][ny] == -1 && maps[nx][ny] == 1)
			{
				q.push({ nx,ny });
				visited[nx][ny] = visited[x][y] + 1;
			}
		}
	}

	return visited[v-1][h-1];
}