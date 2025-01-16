#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n'; 
void solve()
{ 
  ll n,k,x;cin>>n>>k>>x;
  vector<ll>v(n);
  vector<ll>diff;
  for(auto &it:v)cin>>it;
  sort(v.begin(),v.end());
  // for(auto it:v)cout<<it<<" ";
  ll cnt=0;
  for(int i=1;i<n;i++){
     if(v[i]-v[i-1]>x){
      cnt++;
      diff.push_back(v[i]-v[i-1]);
     }
  }
  sort(diff.begin(),diff.end());
  cnt++;
  // debug(cnt+1);
  for(int i=0;i<diff.size();i++){
       ll need = (diff[i]-1)/x;
       if(need<=k and k){
        cnt--;
        // debug(cnt);
        k-=need;
       }else{
        break;
       }
  }
  cout<<cnt<<'\n';
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    // cin >> tt;
    while (tt--)
        solve();
    
}
