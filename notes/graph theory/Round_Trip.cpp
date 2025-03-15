#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define pb push_back
#define pp pop_back
#define ll long long int
#define l long int
#define razon_hassan              \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
const int MOD1 = 127657753, MOD2 = 987654319;
const int p1 = 137, p2 = 277;
const int mod = 1000000007;
const int N = 1e5 + 10;
vector<int> graph[N];
bool visited[N];
vector<int> cycle;
bool dfs(int vertex, int par)
{
    /*
    take action on vertex after entering the vertex
    */

    visited[vertex] = true;
    cycle.push_back(vertex);

    for (int child : graph[vertex])
    {
        /*
        take action on child before entering the child node
        */
        if (visited[child] and child != par)
        {
            cycle.push_back(child);
            return true;
        }
        if (!visited[child])
        {
            if (dfs(child, vertex))
            {
                return true;
            }
        }
        /*
        take action on child after exiting the child node
        */
    }

    /*
    take action on vertex before exiting the vertex
    */
    cycle.pop_back();
    return false;
}

//===========================================================
void feel_the_world()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            cycle.clear();
            if (dfs(i, 0))
                break;
        }
    }
    if (cycle.empty())
    {
        cout << "IMPOSSIBLE\n";
    }
    else
    {
        int x = cycle[cycle.size() - 1];
        int pos = 0;
        for (int i = 0; i < cycle.size(); i++)
        {
            if (cycle[i] == x)
            {
                pos = i;
                break;
            }
        }
        cout << cycle.size() - pos << endl;
        for (pos; pos < cycle.size(); pos++)
        {
            cout << cycle[pos] << " ";
        }
    }
}

//===========================================================
int main()
{
    razon_hassan
        l t = 1;
    // cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
