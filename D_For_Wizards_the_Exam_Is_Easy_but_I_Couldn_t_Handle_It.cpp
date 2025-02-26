#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
   int n;cin>>n;
   vector<int>arr(n);
   for(auto &it:arr)cin>>it;
   int mn_diff=0,l=0,r=0;
   for(int i=0;i<n;i++){
    int diff=0;
    for(int j=i+1;j<n;j++){
        if(arr[j]>arr[i]){
            diff++;
        }else if(arr[j]<arr[i]){
            diff--;
        }
        if(diff<mn_diff){
            mn_diff=diff;
            l=i,r=j;
        }
    }
   }
   cout<<(l+1)<<" "<<(r+1);nl
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
