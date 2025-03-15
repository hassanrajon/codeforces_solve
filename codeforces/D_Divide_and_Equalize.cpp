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
  map<int,int>mp;
  for(int i=0;i<n;i++){
    int x;cin>>x;
    for(int d=2;d*d<=x;d++){
        while(x%d==0){
           mp[d]++;
           x/=d;
        }
    }
    if(x>1)mp[x]++;
  }
  for(auto it:mp)
    if(it.second%n){
        no
        return;
    }
  yes  
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
