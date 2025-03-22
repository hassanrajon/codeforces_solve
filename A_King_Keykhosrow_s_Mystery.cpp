#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
const int inf=1e8;
void solve()
{ 
   int a,b;cin>>a>>b;
   int x=min(a,b);
   while(x%a!=0 || x%b!=0)x++;
   cout<<x;nl
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
