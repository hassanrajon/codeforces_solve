#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
  ll n;cin>>n;
  vector<ll>arr(n);
  for(auto &it:arr)cin>>it;
  ll ans=accumulate(arr.begin(),arr.end(),0ll);
  bool have_even=false;
  for(int i=0;i<n;i++)if(arr[i]%2==0)have_even=true;
  ll mx=*max_element(arr.begin(),arr.end());
  ll cnt=count_if(arr.begin(),arr.end(),[&](ll x){return x&1;});
  if(have_even && cnt){
    cout<<ans-(cnt-1);nl
  }else{
    cout<<mx;nl
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
