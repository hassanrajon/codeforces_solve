#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n;
    cin >> n;
    vector<ll> profit(n), weight(n);
    for (ll i = 0; i < n; i++)
        cin >> profit[i];
    for (ll i = 0; i < n; i++)
        cin >> weight[i];
    float m;
    cin >> m;
        vector<pair<float, ll>> values(n);
        for (ll i = 0; i < n; i++)
            values[i] = {(float)profit[i] / (float)weight[i], i};
        sort(values.rbegin(), values.rend());
        float ans = 0;
        for (ll i = 0; m > 0 && i < n; i++)
        {
            float x = m / (float)weight[values[i].second];
            if (x > 1)
                x = 1;
            ans += (profit[values[i].second] * x);
            m -= (weight[values[i].second] * x);
        }
        cout << ans ;
    
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
