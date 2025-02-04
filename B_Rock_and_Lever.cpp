#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
ll bitsRequired(int n) {
    return (32 - __builtin_clz(n))*1ll;
}
void solve()
{ 
  int n;cin>>n;
  map<ll,ll>mp;
  for(int i=0;i<n;i++){
    int x;cin>>x;
    mp[bitsRequired(x)]++;
  }
  ll ans=0;
  for(auto it:mp){
    ans+=(it.second>1?(it.second*(it.second-1))/2:0);
  }
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
