#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
  int n,m;cin>>n>>m;
  vector<vector<int>>v(n,vector<int>(m));
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>v[i][j];
    }
  }
  vector<int>ans(n);
  for(int i=0;i<n;i++){
    sort(v[i].begin(),v[i].end());
    ans[v[i][0]]=i+1;
    for(int j=1;j<m;j++){
       if((v[i][j-1]+n)!=v[i][j]){
        cout<<(-1)<<'\n';
        return;
       }
    }
  }
  for(auto it:ans){
    cout<<it<<" ";
  }
  nl
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
