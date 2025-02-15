#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
#define yes cout << "YES\n";
#define no cout << "NO\n";
void solve()
{ 
  int n;cin>>n;
  vector<ll>arr(n,0);
  map<ll,ll>mp;mp[0]=1;
  for(int i=0;i<n;i++){
    cin>>arr[i];
    if(!(i&1))arr[i]*=-1ll;
  }
  mp[arr[0]]=1;
  for(int i=1;i<n;i++){arr[i]+=arr[i-1];mp[arr[i]]++;}
  for(auto &it:mp){
     if(it.second>1){yes return;}
  }
  no
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){ 
        solve();
     }
}
