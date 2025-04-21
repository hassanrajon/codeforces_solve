#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
   int n;cin>>n;
   string s;cin>>s;
   vector<int>ans(n);
   int shuru=1,sesh=n;
   for(int i=(n-2);i>=0;i--){
    if(s[i]=='<'){
        ans[i+1]=shuru;shuru++;
    }else{
        ans[i+1]=sesh;sesh--;
    }
   }
   ll sum=accumulate(ans.begin(),ans.end(),0ll);
   ll x  = (n*(n+1))/2 -sum;
   ans[0]=x;
   for(auto it:ans)cout<<it<<' ';nl
}
int32_t main()
{   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
