#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector<int> parent;

int find(int i)
{
    while (parent[i] != i)
    {
        i = parent[i];
    }
    return i;
}

void _union(int a, int b)
{
    a = find(a);
    b = find(b);
    parent[a] = b;
}

void kruskal_MST(int v, vector<vector<int>> &cost)
{
    parent.resize(v);
    int mincost = 0;
    for (int i = 0; i < v; i++)
    {
        parent[i] = i;
    }
    int count = 0;
    while (count < v - 1)
    {
        int min = 100, a = -1, b = -1;
        for (int i = 0; i < v; i++)
        {
            for (int j = 0; j < v; j++)
            {
                if (find(i) != find(j) && cost[i][j] < min)
                {
                    min = cost[i][j];
                    a = i;
                    b = j;
                }
            }
        }
        _union(a, b);
        count++;
        mincost += min;

        cout << "\nSelected edge: (" << a << ", " << b << ") with cost: " << min << '\n';
    }
    cout << "\nMinimum cost of the spanning tree: " << mincost << '\n';
}

void solve()
{
    int m, e;
    cin >> m >> e;
    vector<vector<int>> a(m, vector<int>(m, 0));

    for (int i = 0; i < e; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        a[x][y] = z;
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i != j && a[i][j] == 0)
                a[i][j] = 100;
        }
    }

        cout << "\nAdjacency matrix:\n\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }

    kruskal_MST(m, a);
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
    return 0;
}