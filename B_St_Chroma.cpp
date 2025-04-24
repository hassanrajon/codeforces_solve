#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
   int n,x;cin>>n>>x;
   vector<int>arr(n);
   int cnt=0;
   if(n==x){
    for(int i=0;i<n;i++){
        cout<<i<<' ';
    }
    nl return;
   }
   for(int i=0;i<n;i++){
      if(i==x && i!=(n-1)){
         ++cnt;
          arr[i]=cnt;
      }else{
        arr[i]=cnt;
      }
      cnt++;
   }
   arr[n-1]=x;
   for(auto it:arr)cout<<it<<" ";nl
}
int32_t main()
{   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
