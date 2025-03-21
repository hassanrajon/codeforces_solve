#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
    int a,b;cin>>a>>b;
    // b,b,3a-2b ,median is b
    // mean is always b, because sum=3a
    cout<<3;nl
    cout<<b<<" "<<b<<" "<<(3*a-2*b);nl
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    // cin >> tt;
    while (tt--){
        solve();
     }
}
