#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
#define all(r) r.begin(), r.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";
void solve()
{ 
  int n,m;cin>>n>>m;
  vector<string>grid(n);
  for(auto &it:grid)cin>>it;
//   for(auto it:grid)cout<<it<<'\n';
  vector<vector<int>>col_sum(n);
  vector<vector<int>>row_sum(n);
  for(int i=0;i<n;i++){
    int cnt=0;
    for(int j=0;j<m;j++){
         cnt+=(grid[i][j]=='1');
         row_sum[i].push_back(cnt);
    }
  }
  for(int i=0;i<m;i++){
    int cnt=0;
    for(int j=0;j<n;j++){
         cnt+=(grid[i][j]=='1');
         col_sum[j].push_back(cnt);
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(grid[i][j]=='1'){
            // debug(i)
            // debug(j)
            // debug(row_sum[i][j])
            // debug(col_sum[i][j])
            // nl
            if((j+1)==row_sum[i][j] || (i+1)==col_sum[i][j]){
                continue;
            }else{
                no return;
            }
        }
    }
  }
  yes
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
