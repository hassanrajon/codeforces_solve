#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
   int n;cin>>n;
   vector<string>v(n);
   for(auto &it:v)cin>>it;
   int mat[n+1][n+1];
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
       mat[i][j]=v[i-1][j-1]-48;
    }
   }
   int ans=0;
   for(int layer=1;layer<=(n/2);layer++){
    vector<int>v;
    int element_cnt=0;
     for(int i=layer;i<=(n-layer+1);i++){
      v.push_back(mat[layer][i]);
      element_cnt++;
      // cout<<mat[layer][i]<<" ";
     }
    //  cout<<',';
     for(int i=layer+1;i<=(n-layer);i++){
      v.push_back(mat[i][n-layer+1]);
      // cout<<mat[i][n-layer+1]<<" ";
     }
    //  cout<<',';
     for(int i=n-layer+1;i>=layer;i--){
        v.push_back(mat[n-layer+1][i]);
        // cout<<mat[n-layer+1][i]<<" ";
     }
    //  cout<<',';
     for(int i=n-layer;i>=(layer+1);i--){
        v.push_back(mat[i][layer]);
        // cout<<mat[i][layer]<<" ";
     }
    //  cout<<endl;
    for(int i=0;i<(element_cnt-1);i++){
      int zeros=0,ones=0;
      for(int j=i;j<v.size();j+=(element_cnt-1)){
        // cout<<v[j]<<" ";
        if(v[j]==0)zeros++;
        else ones++;
      }
      // cout<<endl;
      ans+=4-max(ones,zeros);
    }

   }
   cout<<ans<<'\n';
} 
int main()
{   ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}
