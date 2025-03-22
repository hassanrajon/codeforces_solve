#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
#define all(r) r.begin(), r.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";
void solve()
{ 
    
  int n,k;cin>>n>>k;
  string s;cin>>s;
  string x=s;
  reverse(x.begin(),x.end());
  if(s<x){
    yes return;
  }
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(s[i]>s[j] && k){
            yes return;
        }
    }
  }
   no
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
