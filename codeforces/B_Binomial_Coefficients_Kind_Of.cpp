#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
const int mod = 1000000007;
const int N=1e5;
vector<ll>ans;
void pre(){
    ll x=1;
    for(ll i=0;i<=N;i++){
      x = x*2%mod;
      ans.push_back(x);
    }
}  
void solve()
{
  ll n;cin>>n;
  vector<ll>a(n),b(n);
  for(auto &it:a)cin>>it;
  for(auto &it:b)cin>>it;
  for(auto it:b)cout<<ans[--it]<<'\n';
}
int main()
{   ios_base::sync_with_stdio(0);
    cin.tie(0);
    pre();
    // for(int i=1;i<10;i++)cout<<ans[i]<<" ";
    ll tt=1;
    // cin >> tt;
    while (tt--)
    {
        solve();
    }
}
