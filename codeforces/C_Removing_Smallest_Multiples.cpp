#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
  int n;cin>>n;
  string s;cin>>s;
  s.insert(0,1,'1');
  vector<int>visited(n+1,0);
  for(int i=1;i<=n;i++)
     if(s[i]=='1')visited[i]=2;
  
  ll ans=0;
  for(int i=1;i<=n;i++){
    if(s[i]=='0'){
        for(int j=i;j<=n;j+=i){
           if(visited[j]==0){
            ans+=i;
            visited[j]=1;
            // cout<<i<<" "<<j<<endl;
           }else if(visited[j]==2){
            break;
           }
        }
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
