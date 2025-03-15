#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
  int n,m;cin>>n>>m;
  vector<int>arr(n),cnt(m);
  for(int i=0;i<n;i++){
    cin>>arr[i];
    arr[i]%=m;
    cnt[arr[i]]++;
  }
  int ans=0;
  if(cnt[0]){
    ans++;
  }
  for(int i=1;i<m;i++){
      if(cnt[i] && cnt[m-i]){
    //    cout<<i<<" "<<m-i<<"==>"<<cnt[i]<<" "<<cnt[m-i]<<'\n';
      int mx = max(cnt[i],cnt[m-i]);
      int mn = min(cnt[i],cnt[m-i]);
      if(mx==mn){
        ans++;
      }else{
        ans+=(max(cnt[i],cnt[m-i])-min(cnt[i],cnt[m-i])-1)+1;
      }
      cnt[m-i]=0;
      }else if(cnt[i]){
        // cout<<i<<" "<<m-i<<"==>"<<cnt[i]<<" "<<cnt[m-i]<<'\n';
        ans+=cnt[i];
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
