#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
  ll n;cin>>n;
  vector<ll>v(n);
  for(auto &it:v)cin>>it;
  ll ans = accumulate(v.begin(),v.end(),0ll);
  while(v.size()>1){
    vector<ll>temp(v.size()-1);
    for(int i=0;i<v.size()-1;i++){
          temp[i]=v[i+1]-v[i];
    }
    swap(v,temp);
    ans=max(ans,abs(accumulate(v.begin(),v.end(),0ll)));
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
