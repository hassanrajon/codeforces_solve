#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
   int n,x;cin>>n>>x;
   if(n==1){
    if(x==0){
        cout<<(-1);nl return;
    }else{
        cout<<(x);nl return;
    }
   }
   if(x==0){
    ll ans=0;
    if(n&1){
        ans=(n-2)+5;
    }else{
        ans=n;
    }
    cout<<ans;nl return;
   }
   if(x==1){
    ll ans=0;
    if(n&1){
       ans=n;
    }else{
        ans=(n-2)+5;
    }
    cout<<ans;nl return;
   }
   bitset<35>arr(x);
   int cnt=arr.count();
   if(cnt==1){
    ll ans=x;
    if(n&1){
        ans+=(n-1);
       }else{
        ans+=(n);
       }
    cout<<ans;nl return;
   }
   if(cnt>=n){
    cout<<(x);nl return;
   }else{
    ll ans=0;
    if(cnt%2 == n%2){
        ans=(x+(n-cnt));
    }else{
        ans=(x+(n-cnt+1));
    }
    cout<<ans;nl return;
   }
   
}
int32_t main()
{   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
