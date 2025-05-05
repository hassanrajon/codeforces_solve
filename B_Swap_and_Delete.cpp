#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
  string s;
  cin>>s;
  int cnt0=count(s.begin(),s.end(),'0');
  int cnt1=count(s.begin(),s.end(),'1');
  int ans=0;
  for(int i=0;i<s.size();i++){
      if(s[i]=='0' && cnt1>0){
         cnt1--;
      }else if(s[i]=='1' && cnt0>0){
        cnt0--;
      }else{
        ans=(s.size())-(i);
        break;
      }
  }
  cout<<ans;nl
}
int32_t main()
{   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
