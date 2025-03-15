#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define pb push_back
#define pp pop_back
#define ll long long int
#define l long int
const int MOD1 = 127657753, MOD2 = 987654319;
const int p1 = 137, p2 = 277;
const int mod = 1000000007;
#define razon_hassan              \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
const int N = 1e5;
vector<vector<int>> connected_components;
vector<int> current_connected_components;
vector<int> graph[N];
bool visited[N];
void dfs(int vertex)
{
    /*
    take action on vertex after entering the vertex
    */
    if (visited[vertex])
    {
        return;
    }
    current_connected_components.push_back(vertex);
    visited[vertex] = true;

    for (int child : graph[vertex])
    {
        /*
        take action on child before entering the child node
        */

        dfs(child);
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
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].pb(v2);
        graph[v2].pb(v1);
    }
    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
        {
            continue;
        }
        current_connected_components.clear();
        dfs(i);
        connected_components.push_back(current_connected_components);
    }
    cout<<connected_components.size();
    nl
    for(auto cc:connected_components){
        for(int c:cc){
            cout<<c<<" ";
        }
        nl
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
