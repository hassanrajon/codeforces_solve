#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
   ll n,k,x;cin>>n>>k>>x;
   vector<ll>arr(n);
   for(auto &it:arr)cin>>it;
   ll sum=accumulate(arr.begin(),arr.end(),0ll);
   if(k*sum<x){
    cout<<(0);nl return;
   }else{
    ll fullArrayLagbe=(x/sum);
    ll cnt=0;
    sum=(sum*fullArrayLagbe);
    for(int i=n-1;i>=0;i--){
      if(sum>=x){
        break;
     }
        sum+=(arr[i]);cnt++;
    }
    ll first_length=(fullArrayLagbe*n)+cnt;
    ll ans=(n*k)-first_length+1;
    // debug(first_length) debug(cnt) debug(fullArrayLagbe)
    cout<<ans;nl
   }
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt; 
    while (tt--){
        solve();
     }
}
