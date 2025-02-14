#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
#define yes cout << "Yes\n";
#define no cout << "No\n";
void solve()
{ 
  int x,y;cin>>x>>y; 
    // 1 99 condition
   if((((x-y)+1)%9==0 && x>y) || (y-x)==1){
    yes
  }else{
    no 
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
