#include <iostream>
#include<queue>
using namespace std;

int n, m;
int cnt = 0;
int arr[101][101];
bool visited[101] = { false };

void input() 
{
    cin >> n >> m;
    for (auto i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        arr[x][y] = true;
        arr[y][x] = true;
    }
}

void bfs(int v)
{
    queue<int> q;
    q.push(v);
    visited[v] = true;

    while (!q.empty())
    {
        v = q.front();
        q.pop();

        for (auto i = 1; i <= n; i++)
        {
            if (!visited[i] && arr[v][i])
            {
                q.push(i);
                visited[i] = true;
                cnt++;
            }
        }
     
    }
}

int main()
{
    input();

    bfs(1);
    cout << cnt;

    return 0;
}