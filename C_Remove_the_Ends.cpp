#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
  int n;cin>>n;
  vector<int>arr(n);
  for(auto &it:arr)cin>>it;
  vector<ll>pos(n),neg(n);
  if(arr[0]>0)pos[0]=arr[0];
  if(arr[n-1]<0)neg[n-1]=abs(arr[n-1]);
  for(int i=1;i<n;i++){
    pos[i]=max(arr[i],0)+pos[i-1];
  }
  for(int i=n-2;i>=0;i--){
    neg[i]+= (abs(min(0,arr[i]))+neg[i+1]);
  }
  ll ans=0;
  for(int i=0;i<n;i++){
    ans=max(ans,pos[i]+neg[i]);
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
