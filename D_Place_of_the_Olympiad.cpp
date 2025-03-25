#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a << " = " << (a) << '\n';
#define nl cout << '\n';

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    if (n * m <= k)
    {
        cout << m;
        nl return;
    }
    else
    {
        ll left = 1, right = INT64_MAX, mid;
        while (left < right)
        {
            mid = left + (right - left) / 2;
            ll x = m / (mid + 1);
            ll need = (mid * x) + (m - (mid + 1) * x);
            if (need * n >= k)
            {
                right = mid;
            }
            else
            {
                left = mid + 1;
            }
        }
        cout << left;
        nl;
    }
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
