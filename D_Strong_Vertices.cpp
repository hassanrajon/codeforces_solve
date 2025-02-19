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
  vector<int>a(n),b(n);
  for(auto &it:a)cin>>it;
  for(auto &it:b)cin>>it;
  vector<int>ans;
  int mx=INT_MIN;
  for(int i=0;i<n;i++){
    ans.push_back(a[i]-b[i]);
    mx=max(mx,a[i]-b[i]);
  }
  int cnt=count(ans.begin(),ans.end(),mx);
  cout<<cnt<<'\n';
  for(int i=0;i<n;i++){
    if(ans[i]==mx){
        cout<<(i+1)<<" ";
    }
  }nl
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}