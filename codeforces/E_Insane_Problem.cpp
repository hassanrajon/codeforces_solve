#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
  ll k,l1,r1,l2,r2;cin>>k>>l1>>r1>>l2>>r2;
  ll ans=0;
  ll p =1;
  while(p<=1e9){
    ans+=max(min(r2/p,r1)-max((l2+p-1)/p,l1)+1,0ll);
    p*=k;
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
