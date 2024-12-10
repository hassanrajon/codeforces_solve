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
unordered_map<ll, ll> mp;
void pre()
{
    for (ll i = 1; i <= 10000; i++)
    {
        ll ans = i * i * i * 1ll;
        mp[ans]++;
    }
}
//===========================================================
void feel_the_world()
{
    ll x;
    cin >> x;

    for (auto it : mp)
    {
        ll need = x - it.first;
        if (mp.count(need))
        {
            // cout << need << " " << x << endl;
            // break;
            yes return;
        }
    }
    no return;
}

//===========================================================
int main()
{
    razon_hassan
        l t = 1;
    cin >> t;
    pre();
    // for(auto it:mp){
    //  cout<<it.first<<" "<<it.second<<endl;
    // }
    while (t--)
    {
        feel_the_world();
    }
}
