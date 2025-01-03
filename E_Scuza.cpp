#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
  int n,q;cin>>n>>q;
  vector<ll>v(n),mx(n);
  for(auto &it:v)cin>>it;
  ll m=0;
  for(int i=0;i<n;i++){
    m=max(v[i],m);
    mx[i]=m;
  }
  for(int i=1;i<n;i++)v[i]=v[i]+v[i-1];
  while(q--){
    ll x;cin>>x;
    int j = upper_bound(mx.begin(),mx.end(),x)-mx.begin();
    cout<<(j==0?0:v[j-1])<<' ';
  }
  cout<<'\n';
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
