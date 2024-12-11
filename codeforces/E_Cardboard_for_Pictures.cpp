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
    ll n, c;
    cin >> n >> c;
    vector<ll> vec(n);
    for (auto &it : vec)
        cin >> it;
    ll lo = 1, hi = 1e9;
    
    while (lo <= hi)
    {   ll sum = 0;
        ll mid = lo + (hi - lo) / 2;
        for (auto it : vec)
        {
            sum += (it + 2 * mid) * (it + 2 * mid);
            if (sum > c)
                break;
        }
        if (sum == c)
        {
            cout << mid;
            nl return;
        }
        else if (sum < c)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
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
