#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
    int n,k;cin>>n>>k;
    vector<int>arr(n);
    for(auto &it:arr)cin>>it;
    int ans=0;
    for(auto it:arr){
        if(it>0 && it>=arr[k-1])ans++;
    }
    cout<<ans;nl
}
int32_t main()
{   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tt=1;
    // cin >> tt;
    while (tt--){
        solve();
     }
}
