#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
   ll n,m;cin>>n>>m;
   vector<vector<ll>>matrix(n+1,vector<ll>(m+1));
   vector<ll>cnt(n*m+1,0);
   ll ans=0;
   for(int i=1;i<=n;i++){
       for(int j=1;j<=m;j++){
        cin>>matrix[i][j];
        cnt[matrix[i][j]]=max(cnt[matrix[i][j]],1ll);
        if(matrix[i][j]==matrix[i-1][j] || matrix[i][j]==matrix[i][j-1]){
            cnt[matrix[i][j]]=2;
        }
        ans=min(ans,-cnt[matrix[i][j]]);
       }
   }
   for(int i=1;i<=(n*m);i++){
    ans+=cnt[i];
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
