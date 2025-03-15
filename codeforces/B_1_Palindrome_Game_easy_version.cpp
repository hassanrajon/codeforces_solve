#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
   int n;cin>>n;
   string s;cin>>s;
   int cnt=0,b=0;
   for(int i=0;i<n;i++)cnt+=s[i]=='0';
   string ans="";
   if(cnt==1){
    ans="BOB\n";
   }else if(cnt&1){
    ans="ALICE\n";
   }else{
    ans="BOB\n";
   }
   cout<<ans;
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
