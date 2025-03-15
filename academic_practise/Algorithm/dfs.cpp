#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout << '\n';

int v, e, TIME=0;
map<char,vector<char>> adj, color, parent;
map<char,vector<int>> d, f;

void DFS_visit(char u)
{
    color[u].push_back('G');
    TIME++;
    d[u].push_back(TIME); 

    for (auto it : adj[u])
    {
        if (color[it].back() == 'W')
        {
            cout << it << "->";
            parent[it].push_back(u);
            DFS_visit(it);
        }
    }

    color[u].push_back('B');
    TIME++;
    f[u].push_back(TIME); 
    // cout << "(" << u << ")<-";
}

void DFS()
{
    for (auto it : adj)
    {
        if (color[it.first].back() == 'W')
        {
            cout << it.first << "->";
            DFS_visit(it.first);
            // cout << '\n' << '\n';
        }
    }
}

void solve()
{
    cin >> v >> e;
    for (int i = 0; i < v; i++)
    {
        char a;
        cin >> a;
        adj[a];
    }
    for (int i = 0; i < e; i++)
    {
        char a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }
 
  
    for (auto it : adj)
    {
        cout << it.first << ": ";
        for (auto bt : it.second)
        {
            cout << bt << " ";
        }
        cout << '\n';
    }
    cout << '\n';

   
    for (auto it : adj)
    {
        color[it.first].push_back('W');
        parent[it.first].push_back('_');
    }

    TIME = 0;
    DFS();

   nl nl
    for (auto it : color)
    {
        cout << "color[" << it.first << "]: ";
        for (auto bt : it.second)
        {
            cout << bt << " / ";
        }
        cout << '\n';
    }
    cout << '\n';

  
    for (auto it : parent)
    {
        cout << "parent[" << it.first << "]: ";
        for (auto bt : it.second)
        {
            if (bt != '_')
                cout << bt << " / ";
            else
                cout << "NULL / " << " ";
        }
        cout << '\n';
    }
    cout << '\n';

   
    for (auto it : d)
    {
        cout << "d[" << it.first << "]: ";
        for (auto bt : it.second)
        {
            cout << bt << " ";
        }
        cout << '\n';
    }
    cout << '\n';

    for (auto it : f)
    {
        cout << "f[" << it.first << "] = ";
        for (size_t i = 0; i < it.second.size(); ++i)
        {
            cout << it.second[i];
            if (i < it.second.size() - 1)
                cout << " / ";
        }
        cout << endl;
    }
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tt = 1;
    // cin >> tt;
    while (tt--)
    {
        solve();
    }
}
