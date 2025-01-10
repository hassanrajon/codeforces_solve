#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
  ll n,q;cin>>n>>q;
  ll x =0,i=0,t=0,last=0;
  map<ll,ll>mp;
  ll sum=0;
  for(int i=0;i<n;i++){
    cin>>x;sum+=x;mp[i]=x;
  }
  while(q--){
     cin>>t;
     if(t==1){
        cin>>i>>x;
        i--;
        if(mp.count(i)==0)mp[i]=last;
        // cout<<sum<<'\n';
        sum-=mp[i];
        mp[i]=x;
        sum+=x;
        // cout<<sum<<'\n';
     }else{
        cin>>x;
        sum=n*x;
        last=x;
        mp.clear();
     }
     cout<<sum<<'\n';
  }
}
int main()
{   ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tt=1;
    // cin >> tt;
    while (tt--)
    {
        solve();
    }
}
