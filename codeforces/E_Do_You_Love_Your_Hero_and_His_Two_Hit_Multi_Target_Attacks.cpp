#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
  int k;cin>>k;
  vector<pair<int,int>>ans;
  int x=0,y=0;
  while(k){
    int now=1;y++;
    ans.push_back({x,y});
    while(k>=now){
        y++;
        ans.push_back({x,y});
        k-=now;now++;
    }
    x++;
  }
  cout<<ans.size();nl
  for(auto it:ans){cout<<it.first<<' '<<it.second;nl}
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
