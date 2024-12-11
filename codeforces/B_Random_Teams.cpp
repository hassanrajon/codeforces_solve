#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ll long long int
#define l long int
#define razon_hassan                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
const int MOD1 = 127657753, MOD2 = 987654319;
const int p1 = 137, p2 = 277;
const int mod = 1000000007;


//===========================================================
void feel_the_world()
{  ll n,m;
cin>>n>>m;
  ll k = n / m;
  ll  t = n % m;
    cout << (m - t) * k * (k - 1) / 2 + t * k * (k + 1) / 2 << ' ' << (n - m) * (n - m + 1) / 2;

}

//===========================================================
int main()
{   razon_hassan
    l t=1;
    // cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
