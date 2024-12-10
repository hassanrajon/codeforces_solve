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

//===========================================================
void feel_the_world()
{
    ll n = 0, k = 0;
    cin >> n >> k;
    vector<ll> vec(n);

    for (auto &it : vec)
        cin >> it;
    sort(vec.begin(), vec.end());

    ll pre[n + 1];
    pre[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + vec[i - 1];
    }

    ll ans = 0, left = 0, right = 0;

    for (int i = 0; i <= k; i++)
    {
        left = 2 * i;
        right = n - 1 - (k - i);
        ans = max(ans, pre[right + 1] - pre[left]);
    }

    cout << ans << '\n';
}

//===========================================================
int main()
{
    razon_hassan
        l t = 1;
    cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
