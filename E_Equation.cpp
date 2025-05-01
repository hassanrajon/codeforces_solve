#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
#define double long double
void solve()
{ 
  double c;cin>>c;
  double left=0,right=1e5;
  for(int i=0;i<50;i++){
    double mid=(left+right)/2;
    (mid*mid+sqrtl(mid)<=c)?left=mid:right=mid;
  }
  cout<<fixed<<setprecision(10)<<left;
}
int32_t main()
{   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tt=1;
    // cin >> tt;
    while (tt--){
        solve();
     }
}
