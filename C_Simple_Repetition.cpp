#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a << " = " << (a) << '\n';
#define nl cout << '\n';
#define all(r) r.begin(), r.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";
vector<ll> base = {0, 1, 11, 111, 1111, 11111, 111111, 1111111};
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
void solve()
{
    ll x, k;
    cin >> x >> k;
    if (x == 1)
    {
        x = base[k];
        if (isPrime(x))
        {
            yes
        }else{
            no
        }
    }
    else
    {
        if (isPrime(x) && k == 1)
        {
            yes
        }
        else
        {
            no
        }
    }
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
