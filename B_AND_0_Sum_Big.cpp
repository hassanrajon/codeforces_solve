#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
const int mod =1e9+7;
void solve()
{ 
  ll n,k;cin>>n>>k;
  ll ans=1;
  for(int i=0;i<k;i++)ans=(ans*n)%mod;
  cout<<ans<<'\n';
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
