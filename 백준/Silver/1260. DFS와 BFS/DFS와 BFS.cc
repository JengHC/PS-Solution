#include <iostream>
#include<queue> // bfs에 활용
#include<cstring> // memset사용시 필요
using namespace std;

// 전역변수로 정의 
int n, m, v;
int arr[1001][1001]; // 인접행렬
int visited[1001] = { false }; //노드개수, 정점의 개수

void input()
{
	int a, b;
	cin >> n >> m >> v;
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		arr[a][b] = true;
		arr[b][a] = true;
	}
}

// DFS - 재귀 스택 사용 LIFO 후입선출 
void dfs(int num)
{
	visited[num] = true;   // 시작점 방문 기록
	cout << num << ' ';  // 방문 노드 출력

	for (int i = 1; i <= n; i++)
	{
		if (!visited[i] && arr[num][i])
		{
			dfs(i);
		}
	}
}

// BFS - 큐 사용 FIFO 선입선출 
void bfs(int num)
{
	queue<int> q;
	q.push(num);
	visited[num] = true;

	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		cout << x << ' ';

		for (int i = 1; i <= n; i++)
		{
			if (!visited[i] && arr[x][i])
			{
				q.push(i);
				visited[i] = true;
			}
		}
	}

}

int main() {
	input();

	dfs(v);
	cout << '\n';
	memset(visited, false, sizeof(visited)); //방문기록 visited 초기화

	bfs(v);
	cout << '\n';


	return 0;
}