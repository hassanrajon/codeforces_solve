#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
  ll n,k;cin>>n>>k;
  vector<ll>a(n);
  for(auto &it:a)cin>>it;
  vector<int>color[k+1];
  for(int i=1;i<=k;i++)color[i].push_back(0);
  for(int i=0;i<n;i++)color[a[i]].push_back(i+1);
  for(int i=1;i<=k;i++)color[i].push_back(n+1);
  int ans = 1e9+7;
  for(int i=1;i<=k;i++){
    int mxStep=0,smxStep=0;
    // cout<<"color: "<<i<<"==>";
    for(int j=1;j<color[i].size();j++){
        int step=color[i][j]-color[i][j-1]-1;
        // cout<<color[i][j]<<" ";
        // cout<<step<<" ";
        if(step>mxStep){
            smxStep=mxStep;
            mxStep=step;
        }else if(step==mxStep || step>smxStep)smxStep=step;
    }
    // cout<<mxStep<<" "<<smxStep<<endl;
    ans=min(ans,max(mxStep/2,smxStep));
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
