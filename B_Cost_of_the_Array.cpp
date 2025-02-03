#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
   int n,k;cin>>n>>k;
   vector<int>arr(n);
   for(auto &it:arr)cin>>it;
   if(n==k){
      vector<int>temp;
      for(int i=1;i<n;i+=2){
         temp.push_back(arr[i]);
      }
      temp.push_back(0);
      for(int i=0;i<temp.size();i++){
         if(temp[i]!=i+1){
            cout<<(i+1)<<'\n';return;
         }
      }
   }else{
      int cnt=0;
      for(int i=1;i<=(n-k+1);i++)cnt+=(arr[i]==1);
      if(cnt==(n-k+1))
      cout<<2<<'\n';
      else cout<<1<<'\n';
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
