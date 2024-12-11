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
    cin >> n >> m;
    char str[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> str[i][j];
        }
    }
    char ans[n][m];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {         int row =i;
         row&1==1?cnt=1:cnt=0;

        // wbwbwbwb
        for (int j = 0; j < m; j++)
        {
            if (str[i][j] == '.')
            {
                if (cnt & 1)
                {
                    ans[i][j] = 'W';
                }
                else
                {
                    ans[i][j] = 'B';
                }
            }
            else
            {
                ans[i][j] = str[i][j];
            }
            cnt++;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ans[i][j];
        }
        nl
    }
}

//===========================================================
int main()
{
    razon_hassan
        l t = 1;
    // cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
