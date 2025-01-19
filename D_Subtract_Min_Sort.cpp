#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
  ll n;cin>>n;
  vector<ll>v(n);
  for(auto &it:v){
    cin>>it;
  }
  if(is_sorted(v.begin(),v.end())){
    cout<<"YES\n";
    return;
  }
  for(int i=0;i+1<n;i++){
    int x=min(v[i],v[i+1]);
    v[i]-=x;
    v[i+1]-=x;
  }
  if(is_sorted(v.begin(),v.end())){
    cout<<"YES\n";
  }else{
    cout<<"NO\n";
  }
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
