#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
  int n;cin>>n;
  vector<int>v(n);
  for(auto &it:v)cin>>it;
  for(int i=0;i<n;i++){
    int cnt=max(i,n-i-1);
    int x = (cnt*2);
    // cout<<x;nl
    if(x>(v[i]-1)){
        cout<<"NO\n";
        return;
    }
  }
  cout<<"YES\n";
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
