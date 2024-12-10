#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES\n";
#define no cout << "NO\n";  
void solve()
{
 ll k;cin>>k;
 cout<<(k+int(sqrtl(k)+0.5))<<'\n';
}
int main()
{   ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}
