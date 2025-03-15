#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
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
int s_sum[N];
int cnt[N];
void dfs(int vertex, int par)
{
    /*
    take action on vertex after entering the vertex
    */

    visited[vertex] = true;
    s_sum[vertex] += vertex;
    if (vertex % 2 == 0)
    {
        cnt[vertex]++;
    }
    for (int child : graph[vertex])
    {
        /*
        take action on child before entering the child node
        */

        if (visited[child])
            continue;

        dfs(child, vertex);
        /*
        take action on child after exiting the child node
        */
        s_sum[vertex] += s_sum[child];
        cnt[vertex] += cnt[child];
    }

    /*
    take action on vertex before exiting the vertex
    */
}

//===========================================================
void feel_the_world()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[v].push_back(u);
        graph[u].push_back(v);
    }
    dfs(1, 0);
    for (int i = 1; i <= n; i++)
    {
        cout << s_sum[i] << " " << cnt[i] << endl;
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
