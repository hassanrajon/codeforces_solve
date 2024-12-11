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
// Divisible pair --Codeforces Round 925 (Div. 3)
void feel_the_world()
{    
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    map<pair<ll,ll>,ll>mp;
    ll ans=0;
    for(ll i=0;i<n;i++){
       ans+=mp[{(x-v[i]%x)%x,v[i]%y}];
       mp[{v[i]%x,v[i]%y}]++;
    }
    cout<<ans<<'\n';
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
