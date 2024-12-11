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

//===========================================================
void feel_the_world()
{
    int n;
    cin >> n;
    for (int i = 1; i <= 2 * n; i++)
    {
        if (i % 4 == 0 || (i + 1) % 4 == 0)
        {
            for (int j = 1; j <= 2 * n; j++)
            {
                if (j % 4 == 0 || (j + 1) % 4 == 0)
                    cout << '#';
                else
                    cout << '.';
            }
        }
        else
        {
            for (int j = 1; j <= 2 * n; j++)
            {
                if (j % 4 == 0 || (j + 1) % 4 == 0)
                    cout << '.';
                else
                    cout << '#';
            }
        }
        nl
    }
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
