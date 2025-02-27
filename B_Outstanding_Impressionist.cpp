#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
#define ff first 
#define ss second
#define pb push_back
void solve()
{ 
   int n;cin>>n;
   vector<pair<int,int>>arr;
   vector<int>pre(2*n+2,0);
   vector<int>check(2*n+2,0);
   for(int i=0;i<n;i++){
    int l,r;cin>>l>>r;
    arr.pb({l,r});
    if(l==r){
      pre[l]=1;
      check[l]++;   
    }
   }
   for(int i=1;i<pre.size();i++){
    pre[i]=pre[i-1]+pre[i];
   }
   string ans;
//    for(auto it:pre)cout<<it<<" ";nl
   for(auto it:arr){
     int len=it.ss-it.ff+1;
     int prev = (it.ff==it.ss)?1:(pre[it.ss]-pre[it.ff-1]);
    //  debug(prev)
     if(prev==len){
        if(it.ff==it.ss && check[it.ff]==1){
            ans.pb('1');
        }else{
            ans.pb('0');
        }
    }else{
        ans.pb('1');
    }
   }
   cout<<ans;nl
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
