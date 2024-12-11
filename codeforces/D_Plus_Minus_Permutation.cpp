#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll lcm(ll x,ll y){
    return x*y/__gcd(x,y);
}
void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    ll f = n/x - n/lcm(x,y);
    ll s = n/y - n/lcm(x,y);
    s = (s*(s+1))/2;
    f = (f*(2*(n+1-f)+(f-1)) )/2;
    cout<<(f-s)<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tt = 1;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}
