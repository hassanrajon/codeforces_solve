#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
  int n;cin>>n;
  string s;cin>>s;
  vector<string>grid(n);
  for(int i=0;i<n;i++){
    string temp=s;
    if(s[i]=='0'){
        temp[i]='1';
    }else{
        temp[i]='0';
    }
    grid[i]=temp;
  }
  int cnt=0;
  for(auto it:grid){
    for(int i=0;i<n;i++){
        if(it[i]=='1'){
            cnt++;
        }
    }
  }
  cout<<cnt;nl 
}
int32_t main()
{   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
