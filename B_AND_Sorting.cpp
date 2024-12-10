#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ll long long int
#define razon_hassan                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
const int mod = 1000000007;
//===========================================================
void feel_the_world()
{
   ll n;cin>>n;
   ll ans=INT64_MAX;
   for(ll i=0;i<n;i++){
    ll x;cin>>x;
    if(x!=i)ans&=x;
   }
   cout<<ans<<'\n';
}
//===========================================================
int main()
{   razon_hassan
    ll t=1;
    cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
