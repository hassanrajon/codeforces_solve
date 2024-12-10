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
int ans = 0;
int depth[N];
vector<int> graph[N];
bool visited[N];
void dfs(int vertex,int par)
{
    /*
    take action on vertex after entering the vertex
    */
    if (visited[vertex])
    {
        return;
    }
    visited[vertex] = true;
    depth[vertex]=depth[par]+1;
    ans=max(ans,depth[vertex]);
    for (int child : graph[vertex])
    {
        /*
        take action on child before entering the child node
        */

        dfs(child,vertex);
        /*
        take action on child after exiting the child node
        */
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
    vector<int> par;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x < 0)
        {
            par.push_back(i);
        }
        else
        {
            graph[i].push_back(x);
            graph[x].push_back(i);
        }
    }
    for (int it : par)
    {
        dfs(it, 0);
    }
    cout << ans;
}

//===========================================================
int main()
{
    razon_hassan
        l t = 1;
    // cin >> t;
    ans = 0;
    while (t--)
    {
        feel_the_world();
    }
}
