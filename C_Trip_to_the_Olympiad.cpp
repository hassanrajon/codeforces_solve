#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
  ll l,r;cin>>l>>r;
  ll ans=0;
  ll a,b,c;
  for(int i=30;i>=0;i--){
    ll bit1 = (l >> i) & 1;
    ll bit2 = (r >> i) & 1;
    if(bit1==bit2){
        // cout<<bit1<<" "<<bit2<<'\n';
        ans+=bit1*(1ll<<i);
    }else{
        a=ans+(1ll<<i);
        b=a-1;
        break;
    }
  }
  for(ll i=l;i<=r;i++)
    if(i!=a && i!=b){
        c=i;break;
    }
 cout<<a<<" "<<b<<" "<<c<<'\n';   
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
