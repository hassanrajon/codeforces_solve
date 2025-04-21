#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
   ll n,k;cin>>n>>k;
   vector<ll>li(n),ri(n);
   for(auto &it:li)cin>>it;
   for(auto &it:ri)cin>>it;
   ll sum=0;
   vector<ll>extra;
   for(int i=0;i<n;i++){
    sum+=(max(li[i],ri[i]));
    extra.push_back(min(li[i],ri[i]));
   }
   sort(extra.rbegin(),extra.rend());
   sum+=accumulate(extra.begin(),extra.begin()+(k-1),0ll);
   sum++;
   cout<<sum;nl
}
int32_t main()
{   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
