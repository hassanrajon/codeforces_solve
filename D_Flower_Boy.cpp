#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
const int inf=2e9+10;
void solve()
{ 
   int n,m;cin>>n>>m;
   vector<int>a(n),b(m);
   for(auto &it:a)cin>>it;
   for(auto &it:b)cin>>it;
   vector<int>prefix(m,inf),suffix(m,(-inf));
   int indx=0;
   for(int i=0;i<n && indx<(m);i++){
    if(a[i]>=b[indx]){
        // debug(a[i]) debug(b[indx])
        prefix[indx]=i;
        indx++;
    }
   }
   indx=m-1;
   for(int i=(n-1);i>=0 && indx>=0;i--){
    if(a[i]>=b[indx]){
        // debug(a[i]) debug(b[indx])
        suffix[indx]=i;
        indx--;
    }
   }
//    for(auto it:prefix)cout<<it<<" ";nl
//    for(auto it:suffix)cout<<it<<" ";nl
   if(prefix[m-1]!=inf){
    cout<<(0);nl return;
   }
  int ans=inf;
  for(int i=1;i<m-1;i++){
      if(prefix[i-1]<suffix[i+1]){
        ans=min(ans,b[i]);
      }
  }
  if(suffix[1]!=(-inf)){
    // cout<<"hello";
    ans=min(ans,b[0]);
  }
//   debug(prefix[m-1])
  if(prefix[m-2]!=inf){
    // cout<<"hello";
    ans=min(ans,b[m-1]);
  }
  if(ans==inf){
    cout<<(-1);nl
  }else{
    cout<<ans;nl
  }
}
int32_t main()
{   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
