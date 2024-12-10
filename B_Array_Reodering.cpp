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
bool gcd(int a, int b)
{
    int x;
    if (a == 0 || b == 0)
    {
        x = 0;
    }
    else
    {
        while (b != 0)
        {
            int t = b;

            b = a % b;
            a = t;
        }
        x = a;
    }
    return x>1;
}

//===========================================================
void feel_the_world()
{
    int n;
    cin >> n;
    int even = 0;
    vector<int> vec;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x & 1)
        {
            vec.push_back(x);
        }
        else
        {
            even++;
        }
    }
    // cout << even << endl;
    ll ans = ((2 * (n - even) * even) + (even * even) - even) / 2;
    // cout << ans << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            if(gcd(vec[i],vec[j])){
                ans++;
            }
        }
    }
    cout << ans << endl;
}

//===========================================================
int main()
{
    razon_hassan
        l t = 1;
    cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
