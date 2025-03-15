#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
  int n;cin>>n;
  string s;cin>>s;
  reverse(s.begin(),s.end());
  int cnt = (s[0]=='1');
  for(int i=0;i+1<n;i++){
     if(s.substr(i,2)=="01"){
         cnt+=2;
     }
  }
  cout<<cnt<<'\n';
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
