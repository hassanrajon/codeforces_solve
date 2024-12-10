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
    int n, m;
    cin>>n>>m;
    string s;
    int mx = 0, a = 0, b = 0, x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        int start = 0, end = 0, hash_cnt = 0;
        bool found = false;
        for (int i = 0; i < m; i++)
        {
            if (s[i] == '#')
            {
                if (found)
                {
                    end = i + 1;
                }
                else
                {
                    start = i + 1;
                    end = i + 1;
                    found=true;
                }
                hash_cnt++;
            }
        }
        if (hash_cnt > mx)
        {
            mx = hash_cnt;
            a = start;
            b = end;
            x = i + 1;
        }
    }
    y = a + ((b - a + 1) / 2);
    cout << x << " " << y << endl;
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
