#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
 map<string,string>mp;
 int q;cin>>q;
 while(q--){
 string old_handle,new_handle;cin>>old_handle>>new_handle;
  if(mp.find(old_handle)==mp.end())
  {mp[new_handle]=old_handle;}
  else{
   mp[new_handle]=mp[old_handle];
   mp.erase(old_handle);
  }
 }
  cout<<mp.size()<<'\n';
  for(auto it:mp)cout<<it.second<<" "<<it.first<<'\n';
}
int main()
{   ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tt=1;
    // cin >> tt;
    while (tt--)
    {
        solve();
    }
}
