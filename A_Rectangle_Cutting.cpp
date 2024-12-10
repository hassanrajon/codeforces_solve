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
    int a, b;
    cin >> a >> b;
    int x, y;
    if ((a & 1) && (b & 1))
    {
        no
    }
    else if (a % 2 == 0 && b % 2 == 1)
    {
        x = a / 2;
        y = 2 * b;
        if (y == a && x == b)
        {
            no
        }
        else
        {
            yes
        }
    }
    else if (a % 2 == 1 && b % 2 == 0)
    {
        x = b / 2;
        y = 2 * a;
        if (y == b && x == a)
        {
            no
        }
        else
        {
            yes
        }
    }
    else
    {
        x = a / 2;
            y = b * 2;
            int x1 = b / 2;
            int y1 = a * 2;
            if ((y != a || x != b) || (y1 != b || x1 != a))
            {
                yes
            }
            else
            {
                no
            }
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
