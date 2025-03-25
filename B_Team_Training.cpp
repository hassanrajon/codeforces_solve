#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
   ll n,x;cin>>n>>x;
   vector<ll>arr;
   ll ans=0;
   for(int i=0;i<n;i++){
    ll k;cin>>k;
    if(k>=x)ans++;
    else arr.push_back(k);
   }
   sort(arr.begin(),arr.end(),greater<ll>());
   ll temp=INT_MAX;
   ll cnt=0;
   for(int i=0;i<arr.size();i++){
     temp=min(temp,arr[i]);cnt++;
     if(temp*cnt>=x){
        ans++;
        cnt=0;
     }
   }
   cout<<ans;nl
   
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
