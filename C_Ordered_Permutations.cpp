#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void generate(ll i,ll l,ll r,ll k,vector<ll> &ans){
 if(l==r){
    ans[l]=i;
    return;
 }
 ll sz = r-l-1;
 if(sz<60 && (1ll<<sz)<k){
    ans[r]=i;
    generate(i+1,l,r-1,k-(1ll<<sz),ans);
 }else{
    ans[l]=i;
    generate(i+1,l+1,r,k,ans);
 }
}
void solve()
{
   ll n,k;cin>>n>>k;
   if(n<61 && (1ll<<(n-1))<k){
    cout<<"-1\n";
    return;
   }
   vector<ll>v(n);
   generate(1,0,n-1,k,v);
   for(auto it:v)cout<<it<<" ";
   cout<<'\n';
}
int main()
{   ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt=1;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}
