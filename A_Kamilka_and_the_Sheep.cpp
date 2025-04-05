#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
const int inf = 1e9;
void solve()
{ 
   int n;cin>>n;
   vector<int>arr(n);
   int mx=-1,mn=INT_MAX;
   for(auto &it:arr){cin>>it;mx=max(mx,it);mn=min(mn,it);}
   cout<<(mx-mn);nl
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
