#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
  ll n;cin>>n;
  vector<ll>v(n,0);
  for(int i=0;i<n;i++){
    ll x;cin>>x;
    v[i]-=x;
  }
  for(int i=0;i<n;i++){
    ll y;cin>>y;
    v[i]+=y;
  }
  sort(v.begin(),v.end(),greater<ll>());
  ll l=0,r=n-1,ans=0;
  while(l<r){
    if(v[l]>-1 and v[r]>-1){
        ans++,l++,r--;
    }else if(v[l]<0 and v[r]<0){
        break;
    }else{
        if((v[l]+v[r])>-1){
            ans++,l++,r--;
        }else{
            r--;
        }
    }
  }
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
