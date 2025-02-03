#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
   int n;cin>>n;
   vector<vector<int>>arr(n,vector<int>(n));
   vector<int>ans;
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
    ans.push_back(0);
    while (arr[i].size() and arr[i].back()==1)
    {
       ans.back()++;
       arr[i].pop_back();
    }
   }
   sort(ans.begin(),ans.end());
   int cnt=0,j=0,mex=n;
   while(j<n){
    j=lower_bound(ans.begin()+j,ans.end(),cnt+1)-ans.begin();
    if(j==n){
        cout<<min(cnt+1,n)<<'\n';return;
    }
    cnt++,j++;
   }
 cout<<min(cnt+1,n)<<'\n';
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
