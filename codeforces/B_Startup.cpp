#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
  int n,k;cin>>n>>k;
  vector<ll>v;
  map<ll,ll>mp;
  for(int i=0;i<k;i++){
    ll a,b;cin>>a>>b;
    mp[a]=mp[a]+b;
  }
  for(auto it:mp)v.push_back(it.second);
  sort(v.begin(),v.end(),greater<ll>());
  ll ans=0;
  for(int i=0;i<n && i<v.size();i++)ans+=v[i];
  cout<<ans<<'\n';
}
int main()
{   ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}
