#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    const ll size = 5;

    auto prims_MST = [](ll m, vector<vector<ll>> &w)
    {
        vector<ll> nearest(m), distance(m), distance2(m);
        ll count, min, vnear;
        for (ll i = 1; i < m; i++)
        {
            nearest[i] = 1;
            distance[i] = w[0][i];
        }
       
        cout << endl;

        count = 0;
        while (count != m - 1)
        {
            min = 100;
            for (ll i = 1; i < m; i++)
            {
                if (distance[i] >= 0 && distance[i] < min)
                {
                    min = distance[i];
                    vnear = i;
                }
            }
            distance2[vnear] = distance[vnear];
            distance[vnear] = -1;
            for (ll i = 1; i < m; i++)
            {
                if (w[i][vnear] < distance[i])
                {
                    distance[i] = w[i][vnear];
                    nearest[i] = vnear;
                }
            }
            cout << "Selected edge: (" << nearest[vnear] + 1 << ", " << vnear + 1 << ") with cost: " << distance2[vnear] << endl;

            count++;
        }
        ll min_dist = 0;
        for (auto it : distance2)
        {
            min_dist += it;
        }
        cout << "\nMinimum spanning tree cost: " << min_dist << endl;
    };

    auto me = [&prims_MST](ll m, ll e)
    {
        vector<vector<ll>> a(m, vector<ll>(m, 0));
        for (ll i = 0; i < e; i++)
        {
            ll x, y, z;
            cin >> x >> y >> z;
            a[x - 1][y - 1] = z;
        }
        for (ll i = 0; i < m; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                if (i != j && a[i][j] == 0)
                    a[i][j] = 100;
            }
        }
        
        cout << "Adjacency matrix:\n\n";
        for (ll i = 0; i < m; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        prims_MST(m, a);
    };

    ll m, e;
    cin >> m >> e;
    me(m, e);
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