#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
  int n;cin>>n;
  vector<int>arr(n);
  vector<int>bit_cnt(30);
  for(auto &it:arr){
    cin>>it;
    bitset<30>bit(it);
    for(int i=0,j=29;i<30;i++,j--){
      bit_cnt[i]+=(bit[j]==1);
    }
  }
  ll ans=0;
  for(auto &it:arr){
    bitset<30>bit(it);
    ll base=1,temp=0;
    for(int j=29,i=0;j>=0,i<30;j--,i++){
      if(bit[i]==0){
          temp+=(base)*(bit_cnt[j]);
      }else{
        temp+=(base)*(n-bit_cnt[j]);
      }
      base*=2;
    }
    ans=max(ans,temp);
  }
  cout<<ans;nl
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
