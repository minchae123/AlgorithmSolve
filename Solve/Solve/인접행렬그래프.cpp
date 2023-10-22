#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define MAX_VTXS 256
class AdjMatGraph
{
protected:
	int size;
	char vertices[MAX_VTXS];
	int adj[MAX_VTXS][MAX_VTXS];
	vector<int> vec;
	bool visited[MAX_VTXS];
public:
	AdjMatGraph() { reset(); }

	char getVertex(int i) { return vertices[i]; }
	int getEdge(int i, int j) {
		return adj[i][j];
	}
	void setEdge(int i, int j, int val) {
		adj[i][j]
			= val;
	}
	bool isEmpty() { return size == 0; }
	bool isFull() { return size >= MAX_VTXS; }

	void reset()
	{
		size = 0;
		for (int i = 0; i < MAX_VTXS; i++)
			for (int j = 0; j < MAX_VTXS; j++)
				setEdge(i, j, 0);
	}

	void insertVertex(char name)
	{
		if(!isFull())
			vertices[size++] = name;
	}

	void insertEdge(int u, int v)
	{
		setEdge(u, v, 1);
		setEdge(v, u, 1);
	}

	void display() 
	{
		cout << "  ";
		for (int i = 0; i < size; i++)
		{
			cout << vertices[i] << ' ';
		}
		cout << endl;
		for (int i = 0; i < size; i++)
		{
			cout << vertices[i] << ' ';
			for (int j = 0; j < size; j++)
			{
				cout << adj[i][j] << " ";
			}
			cout << endl;
		}
	}

	void DFS(int v)
	{
		visited[v] = 1;
		cout << v << " ";
		for (int i = 0; i < size; i++)
		{
			if (adj[i][v] == 1 && !visited[i]) DFS(i);
		}
	}

	void BFS(int v)
	{
		queue<int> q;
		visited[v] = true;
		q.push(v);
		while (!q.empty())
		{
			int i = q.front();
			cout << i << " ";
			q.pop();
			for (int j = 0; j < size; j++)
			{
				if (isLinked(i,j) && !visited[j])
				{
					q.push(j);
					visited[j] = true;
				}
			}
		}
	}

	void resetVisited()
	{
		for (int i = 0; i < size; i++)
		{
			visited[i] = false;
		}
	}

	bool isLinked(int u, int v)
	{
		return getEdge(u, v) != 0;
	}
};

int main()
{
	int n, m, temp1, temp2;
	cout << "������ ������ ������ �� :";
	cin >> n >> m;
	cout << "������ ���������� �� ���� :" << endl;

	AdjMatGraph g;
	for (int i = 0; i < n; i++)
		g.insertVertex('A' + i);
	for (int i = 0; i < m; i++)
	{
		cin >> temp1 >> temp2;
		g.insertEdge(temp1, temp2);
	}
	cout << "���� ��ķ� ǥ���� �׷���" << endl;
	g.display();
	cout << "DFS �׷��� Ž�� => ";
	g.resetVisited();
	g.DFS(0);

	cout << endl << "BFS �׷��� Ž�� => ";
	g.resetVisited();
	g.BFS(0);
	return 0;
}