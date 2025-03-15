#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
     int n,m;cin>>n>>m;
     vector<ll>x(n),r(n);
     for(auto &it:x)cin>>it;
     for(auto &it:r)cin>>it;
     auto isqrt=[&](ll x){
          ll val= sqrtl(x)+5;
          while(val*val>x)val--;
          return val;
     };
     map<ll,ll>mp;
     for(int i=0;i<n;i++){
          ll center=x[i],rad=r[i];
          for(int xi=center-rad;xi<=center+rad;xi++){
               mp[xi]=max(mp[xi],2*isqrt(rad*rad-(xi-center)*(xi-center))+1);
          }
     }
     ll ans=0;
     for(auto &it:mp)ans+=it.second;
     cout<<ans;nl
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}