#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
   int n,m,k;cin>>n>>m>>k;
   string s;cin>>s;
   int cnt_0=0,ans=0;
   for(int i=0;i<n;i++){
      if(s[i]=='0'){
        cnt_0++;
        // debug(cnt_0)
        if(cnt_0==m){ans++;i+=(k-1);cnt_0=0;}
      }else{
        cnt_0=0;
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
