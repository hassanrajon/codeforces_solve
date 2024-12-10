#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
  ll x,m;cin>>x>>m;
  ll cnt =0;
  for(ll p=1;p<=min(x,m);p++){
    ll y = x^p;
    if(x%p==0 || y%p==0){
    
        if(y>=1 && y<=m){
            cnt++;
        }
    }
  }
 cout<<cnt<<'\n';
   
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
