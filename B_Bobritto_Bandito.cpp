#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
   int n,m,l,r;cin>>n>>m>>l>>r;
   if(m>r){
    cout<<(r-m)<<' '<<r;nl
   }else{
    cout<<(0)<<' '<<(m);nl
   }
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
