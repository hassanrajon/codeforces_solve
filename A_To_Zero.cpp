#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
   ll n,k;cin>>n>>k;
   ll ans=0;
   if(k>=n){
    cout<<(1);nl return;
   }
   ll x=0;
   if(n&1){
     if(k&1){
        n-=k;
        x=k-1;
     }else{
        n-=(k-1);
        x=k;
     }
   }else{
    if(k&1){
        n-=(k-1);
        x=k-1;
     }else{
        n-=(k);
        x=k;
     }
   }
   ans+=(n/x);
   ans+=1+(n%x!=0);

   cout<<ans<<'\n';
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
