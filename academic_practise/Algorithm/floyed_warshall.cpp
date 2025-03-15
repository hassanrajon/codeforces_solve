#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int inf=1e7;
int main(){
     int n,m;cin>>n>>m;
     int cost[n+1][n+1];
     int ans[n+1][n+1];
     for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
         if(i!=j){
            cost[i][j]=inf;
            ans[i][j]=inf;
         }else{
            cost[i][j]=0;
            ans[i][j]=0;
         }
      }
     }
     for(int i=0;i<m;i++){
        int u,v,wt;cin>>u>>v>>wt;
        cost[u][v]=wt;
     }
     for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
         ans[i][j]=cost[i][j];
      }
     }
     for(int k=1;k<=n;k++){
      for(int i=1;i<=n;i++){
         for(int j=1;j<=n;j++){
            ans[i][j]=min(ans[i][j],(ans[i][k]+ans[k][j]));
         }
      }
     }
     for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
           cout<<"node: "<<i<<" to "<<j<<" min-cost "<<ans[i][j]<<'\n';
      }
     }
}