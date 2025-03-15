#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
  int n,a,b;cin>>n>>a>>b;
  if((a+b)&1){
    cout<<"NO\n";
  }else{
    cout<<"YES\n";
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
