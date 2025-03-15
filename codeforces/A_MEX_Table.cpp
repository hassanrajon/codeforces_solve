#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
  ll n,m;cin>>n>>m;
  if(n==1 && m==1){
    cout<<2<<'\n';
  }else{
    cout<<max(n,m)+1<<'\n';
  }
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
