#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a << " = " << (a) << '\n';
#define nl cout << '\n';

int v, e;
char source;
map<char, vector<char>> adj, color, PAR;
map<char, vector<int>> DISTANCE;

void BFS()
{
    for (auto it : adj)
    {
        if (it.first != source)
        {
            color[it.first].push_back('W');
            DISTANCE[it.first].push_back(INT_MAX);
            PAR[it.first].push_back('_');
        }
    }
    color[source].push_back('G');
    DISTANCE[source].push_back(0);
    PAR[source].push_back('_');
    queue<char> Q;
    Q.push(source);
    while (!Q.empty())
    {
        char u = Q.front();
        Q.pop();
        for (auto v : adj[u])
        {
            if (color[v].back() == 'W')
            {
                color[v].push_back('G');
                DISTANCE[v].push_back(DISTANCE[u].back() + 1);
                PAR[v].push_back(u);
                Q.push(v);
            }
        }
        color[u].push_back('B');
    }
    
    for (auto it : color)
    {
        cout << "color  " << it.first << " == ";
        for (auto ti : it.second)
            cout << ti << " ";
        nl;
    }
    nl;
    for (auto it : PAR)
    {
        cout << "PAR " << it.first << " ==  ";
        for (auto ti : it.second)
            cout << (ti != '_' ? ti : 'N') << " ";
        nl;
    }
    nl;
    for (auto it : DISTANCE)
    {
        cout << "DISTANCE OF " << it.first <<" == ";
        for (auto ti : it.second)
            cout << (ti != INT_MAX ? ti : -1) << " ";
        nl;
    }
}

void solve()
{
    cin >> v >> e >> source;
    for (int i = 0; i < e; i++)
    {
        char a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    for (auto it : adj)
    {
        cout << it.first << ": ";
        for (auto bt : it.second)
            cout << bt << " ";
        nl;
    }
    nl;
    BFS();
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