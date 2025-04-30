#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
  int n;cin>>n;
  vector<vector<int>>ans;
  for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
        for(int k=0;k<=n;k++){
              if((i+j+k)<=n){
                ans.push_back({i,j,k});
              }
        }
    }
  }
  for(auto it:ans){
    for(auto k:it){
        cout<<k<<' ';
    }
    nl
  }
}
int32_t main()
{   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tt=1;
    // cin >> tt;
    while (tt--){
        solve();
     }
}
