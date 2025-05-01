#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
  int n;cin>>n;
  vector<int>arr(n);
  int cnt=n;
  for(int i=0;i<n;i++){
     arr[i]=cnt;cnt--;
  }
  cnt=1;
  int sum=0;
  for(int i=0;i<n;i++){
    sum+=abs(arr[i]-cnt);cnt++;
  }
  int ans=0;
 for(int i=0;i<=sum;i+=2){
   ans++;
 }
 cout<<ans;nl
}
int32_t main()
{   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
