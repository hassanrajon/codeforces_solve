//upsolve 
//  its a good problem of binary search on answer
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
const int sz=1e5+10;
void solve()
{ 
  int x,k;cin>>x>>k;
  vector<int>arr(x);
  for(auto &it:arr){cin>>it;}
  int l=0,r=2e5,ans=0;
  while(l<=r){
    int mid=(l+r)/2;
    int partition=0;
    set<int>st;
    for(int i=0;i<x;i++){
        if(arr[i]<mid){
          st.insert(arr[i]);
        }
        if(st.size()==mid){
          partition++;
          st.clear();
        }
    }
    if(partition>=k){
      ans=mid;
      l=mid+1;
    }else{
      r=mid-1;
    }
    // debug(ans)
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
