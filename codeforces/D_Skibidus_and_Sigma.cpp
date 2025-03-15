#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
  int n,m;cin>>n>>m;
  vector<vector<ll>>arr(n,vector<ll>(m));
  vector<pair<ll,int>>v;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
    // sob gula vector er sum & index store kortesi
    ll temp=accumulate(arr[i].begin(),arr[i].end(),0ll);
    v.push_back({temp,i});
    // cout<<temp<<'\n';
  }
  // vector gula tader sum er respective e sort kortesi
  sort(v.begin(), v.end(), greater<pair<ll, int>>());
  // for(auto it:v)cout<<it.first<<" "<<it.second<<endl;
  ll ans=0;ll wt=n*m;
  // final answer calculating
  for(auto &it:v){
    for(int i=0;i<m;i++){
       ans+=wt*(arr[it.second][i]);
       wt--;
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
