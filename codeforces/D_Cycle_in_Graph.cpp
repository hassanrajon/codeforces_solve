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
stack<int> st;
int n, m, k;
ll dist[N];
void dfs(int vertex, int par)
{
    /*
    take action on vertex after entering the vertex
    */
   dist[vertex]=dist[par]+1;

    visited[vertex] = true;
    st.push(vertex);

    for (int child : graph[vertex])
    {
        /*
        take action on child before entering the child node
        */
        if (visited[child] and child != par && (dist[vertex]-dist[child]+1)>k)
        {   

            vector<int> c;
            // c.push_back(vertex);
            int x = -1;
            while (!st.empty() && x != child)
            {
                x = st.top();
                c.push_back(x);
                st.pop();
            }
           
            if (c.size() >= k + 1)
            {   cout<<c.size()<<endl;
                for (int it : c)
                {
                    cout << it << " ";
                }
                exit(0);
            }
        }
        if (!visited[child])
        {
            dfs(child, vertex);
        }
        /*
        take action on child after exiting the child node
        */
    }

    /*
    take action on vertex before exiting the vertex
    */
  if(!st.empty()){
    st.pop();
  }
}

//===========================================================
void feel_the_world()
{

    cin >> n >> m >> k;
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    dfs(1, 0);
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
