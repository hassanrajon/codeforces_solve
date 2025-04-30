#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
   int n;cin>>n;
   vector<int>arr(n);
   for(auto &it:arr)cin>>it;
   sort(arr.begin(),arr.end());
   for(auto it:arr)cout<<it<<' ';
}
int32_t main()
{   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tt=1;
    // cin >> tt;
    while (tt--){
        solve();
     }
}
