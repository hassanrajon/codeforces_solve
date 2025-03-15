#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
  int n,k;cin>>n>>k;
  map<int,int>mp;
  for(int i=0;i<n;i++){
    int x;cin>>x;
    mp[x]++;
  }
  int cnt=0;
  for(auto &it:mp){
    if(mp.count(k-it.first) and mp[k-it.first]>0 and it.second>0)
    {
        int x=(2*it.first==k)?it.second/2:min(mp[k-it.first],it.second);
        cnt+=x;
        // debug(it.first);
        // debug(k-it.first);
        it.second-=x;
        mp[k-it.first]-=x;
        
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
