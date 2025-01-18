#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n'; 
void solve()
{ 
  int n;cin>>n;
  vector<int>v(n);
  v[0]=1;
  v[1]=1;
  v[2]=2;
  v[n-1]=2;
  v[n-2]=1;
  for(int i=3;i<(n-2);i++){
   v[i]=i;
  }
  for(auto it:v)cout<<it<<' ';
  cout<<'\n';
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--)
        solve();
    
}
