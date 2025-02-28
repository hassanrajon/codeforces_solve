#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
  ll n,x,k;cin>>n>>x>>k;
  string s;cin>>s;
  ll ans=0;bool found=false;
  for(int i=0;i<n;i++){
    if(s[i]=='L')x--;else x++;
    k--;
    // debug(x);
    if(x==0){
        found=true;
        ans++;
        break;
    }
  }
  ll cnt=0,pos=0;
  bool ok=false;
  if(found){
    for(int i=0;i<n;i++){
        if(s[i]=='L')pos--;else pos++;
        cnt++;
        if(pos==0){
          ok=true;
          break;
        }
    }
  }
 if(ok){
    ans+=(k/cnt);
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
