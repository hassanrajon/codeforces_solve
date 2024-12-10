const int N = 2e5 + 5;
int n, m;
vector<int> Adj[N];
int parent[N];
int visited[N];
int starting;

bool cycle_detect_DFS(int node)
{
    visited[node] = 1;
    for (int it : Adj[node])
    {
        if (visited[it] == 0)
        {
            parent[it] = node;
            bool cycle = cycle_detect_DFS(it);
            if (cycle)
                return true;
        }
        else if (visited[it] == 1)
        {
            starting = it;
            parent[it] = node;
            return true;
        }
    }
    visited[node] = 2;
    return false;
}