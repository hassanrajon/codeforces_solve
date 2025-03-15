#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> graph[N];
bool visited[N];
int level[N];
void bfs(int source)
{
    queue<int> my_que;
    visited[source] = true;
    my_que.push(source);
    while (!my_que.empty())
    {
        int cur_v = my_que.front();
        // cout<<cur_v<<" ";
        my_que.pop();
        for (int child : graph[cur_v])
        {
            if (!visited[child])
            {
                my_que.push(child);
                visited[child] = true;
                level[child]=level[cur_v]+1;
            } 
        }
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    bfs(1);
    for(int i=1;i<=n;i++){
        cout<<i<<": "<<level[i]<<endl;
    }
}
