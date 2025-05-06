#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
#define int long long
#define all(r) r.begin(), r.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";
void solve()
{ 
   int n;cin>>n;
   vector<int>arr(n);
   for(auto &it:arr)cin>>it;
   vector<int>temp=arr;
   sort(temp.begin(),temp.end());
   if(temp[0]==temp[n-1]){
    no
   }else{
      vector<int>ans(n);
      for(int i=0;i<n;i++){
        if(arr[i]!=temp[n-1]){
            ans[i]=1;
        }else{
            ans[i]=2;
        }
      }
      yes 
      for(auto it:ans)cout<<it<<" ";nl
   }
}
int32_t main()
{   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
