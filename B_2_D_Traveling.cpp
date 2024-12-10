#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<pair<ll, ll>> vec;
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        vec.push_back({x, y});
    }
    if (a <= k and b <= k)
    {
        cout << '0' << '\n';
        return;
    }
    if (b < a)
        swap(a, b);
    ll dis = ((abs(vec[a - 1].first - vec[b - 1].first) + abs(vec[a - 1].second - vec[b - 1].second)));
    ll dis1 = LLONG_MAX, dis2 = LLONG_MAX;
    for (int i = 0; i < k; i++)
    {
        dis1 = min(dis1, abs((vec[a - 1].first - vec[i].first)) + abs(vec[a - 1].second - vec[i].second));
        dis2 = min(dis2, abs((vec[b - 1].first - vec[i].first)) + abs(vec[b - 1].second - vec[i].second));
        dis = min(dis, dis1 + dis2);
    }
    cout<<dis<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tt = 1;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}
