#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
   ll n;cin>>n;
   vector<ll>arr(n);
   for(auto &it:arr)cin>>it;
   string s;cin>>s;
   vector<ll>pre(n);
   pre[0]=arr[0];
   for(int i=1;i<n;i++)pre[i]=arr[i]+pre[i-1];
   ll ans=0;
   ll i=0,j=n-1;
   while(i<j){
      while(s[i]!='L' && i<j)i++;
      while(s[j]!='R' && i<j)j--;
      if(s[i]=='L' && s[j]=='R'){
         if(i==0)ans+=pre[j];
         else ans+=pre[j]-pre[i-1];
      }
      i++,j--;
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
