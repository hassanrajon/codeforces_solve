#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
   ll n,k;cin>>n>>k;
   vector<ll>arr(n);
   for(auto &it:arr)cin>>it;
   ll ans=0;
   if(k==1){
       if(arr[0]>=arr[n-1]){ans+=arr[0];arr[0]=-1;}
       else {ans+=arr[n-1];arr[n-1]=-1;}
       sort(arr.begin(),arr.end(),greater<ll>());
       ans+=arr[0];
   }else{
    sort(arr.begin(),arr.end(),greater<ll>());
    for(int i=0;i<=k;i++){
        ans+=arr[i];
    }
   }
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