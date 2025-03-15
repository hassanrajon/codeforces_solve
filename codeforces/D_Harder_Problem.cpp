#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
 int n;cin>>n;
 vector<int>v(n);
 for(auto &it:v)cin>>it;
 map<int,int>mp;
 vector<int>ans(n,0);
 for(int i=0;i<n;i++){
    if(mp.count(v[i])==0){
        mp[v[i]]=1;
        ans[i]=v[i];
    }
 }
//  for(auto it:ans)cout<<it<<" ";
//  cout<<'\n';
 vector<int>x;

for(int i=1;i<=n;i++){
    if(mp.count(i)==0){
       x.push_back(i);
    }
}
int j=0;
for(int i=0;i<n;i++){
    if(ans[i]==0){
        ans[i]=x[j];
        j++;
    }
}
for(auto it:ans)cout<<it<<" ";
 cout<<'\n';

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
