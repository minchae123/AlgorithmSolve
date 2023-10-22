#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
	int n, m, k, x;
	cin >> n >> m >> k >> x;
	vector<int> visited;
	vector<vector<int>> graph;
	queue<int> q;
	bool isPrint = false;

	visited.resize(n + 1, -1);
	graph.resize(n + 1);
	int a, b;

	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		graph[a].push_back(b);
	}

	q.push(x);
	visited[x] = 0;

	while (!q.empty())
	{
		x = q.front();
		for (auto a : graph[x])
		{
			if (visited[a] != -1)
				continue;
			
			visited[a] = visited[x] + 1;
			q.push(a);
		}
		q.pop();
	}

	for (int i = 1; i <= n; i++)
	{
		if (visited[i] == k)
		{
			cout << i << "\n";
			isPrint = true;
		}
	}

	if (!isPrint)
		cout << -1;
}