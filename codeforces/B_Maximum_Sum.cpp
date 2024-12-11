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
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        ans += vec[i];
    }
    ll current_sum = 0;
    ll max_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        current_sum += vec[i];
        max_sum = max(max_sum, current_sum);
        if (current_sum < 0)
        {
            current_sum = 0;
        }
    }

    if (max_sum > 0)
    {
        while (k--)
        {

            ans += max_sum % mod;
            max_sum = 2 * max_sum % mod;
        }
    }
    if (ans > 0)
    {
        cout << (ans % mod) << "\n";
        return;
    }
    cout << ((ans % mod) + mod) % mod << "\n";
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
