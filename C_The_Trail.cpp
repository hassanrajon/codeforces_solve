#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
  int n,m;cin>>n>>m;
  string s;cin>>s;
  vector<vector<ll>>a(n,vector<ll>(m));
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
  }
  vector<ll>r(n),c(m);
  for(int i=0;i<n;i++){
    ll sum=0;
    for(int j=0;j<m;j++){
     sum+=a[i][j];
    }
    r[i]=sum;
  } 
  for(int j=0;j<m;j++){
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i][j];
    }
    c[j]=sum;
  }
  ll x=0,y=0,cnt=0;
  while(cnt<n+m-1){
    if(s[cnt]=='D'){
        a[x][y]=-r[x];
        r[x]+=a[x][y];
        c[y]+=a[x][y];
        x++;
    }else{
        a[x][y]=-c[y];
        r[x]+=a[x][y];
        c[y]+=a[x][y];
        y++;
    }
    cnt++;
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<'\n';
  }
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
