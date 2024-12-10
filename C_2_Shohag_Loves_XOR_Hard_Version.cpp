#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
    ll x,m;cin>>x>>m;
    ll cnt=0;
    for(ll y=1;y<=m;y++){
        ll p = x^y;
        if(p%x==0 || p%y==0){cnt++;cout<<p<<" ";}
    }
    cout<<'\n';
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
