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
  int x,y,a;cin>>x>>y>>a;
  if(x==1 && y==1){
    if(a&1){
       yes
    }else{
        no
    }
    return;
  }
  int temp=(a-(a/(x+y))*(x+y));
   if(x>temp){
    no return;
   }else{
    yes return;
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
