#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ll long long int
#define l long int
#define razon_hassan              \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
const int MOD1 = 127657753, MOD2 = 987654319;
const int p1 = 137, p2 = 277;
const int mod = 1000000007;
ll sum[200005];
void pre()
{
    for (int i = 1; i <= 200000; i++)
    {
        ll s = sum[i - 1];
        ll temp = i;
        while (temp)
        {
            s += temp % 10;
            temp /= 10;
        }
        sum[i] = s;
    }
}

//===========================================================
void feel_the_world()
{
    ll n;
    cin>>n;
    cout<<sum[n]<<"\n";
}

//===========================================================
int main()
{
    razon_hassan
    pre();
    l t = 1;
    cin >> t;
    // cout<<sum[200000];

    while (t--)
    {
        feel_the_world();
    }
}
