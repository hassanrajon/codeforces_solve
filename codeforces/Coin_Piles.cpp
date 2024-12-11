#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define pb push_back
#define pp pop_back
#define ll long long int
#define l long int
const int mod = 1000000007;
#define razon_hassan              \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

//===========================================================
void feel_the_world()
{
    int a, b;
    cin >> a >> b;
    if (a == 0 && b == 0)
    {
        yes
    }
    else if (a == 0 || b == 0)
    {
        no
    }
    else if (a == b)
    {
        if ((a + b) % 3 == 0)
        {
            yes
        }
        else
        {
            no
        }
    }
    else
    {
        int m_x, m_n, ans;
        m_x = max(a, b);
        m_n = min(a, b);
        ans = m_x - m_n;
        if (m_n >= ans)
        {
            m_n -= ans;
            m_x -= (ans * 2);
            if ((m_n + m_x) % 3 == 0)
            {
                yes
            }
            else
            {
                no
            }
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
