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
    int n, m, k;
    cin >> n >> m >> k;
    int arr[m + 1];
    for (int i = 0; i < m + 1; i++)
    {
        cin >> arr[i];
    }
    int last = arr[m];
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int temp = last ^ arr[i];
        // cout<<temp<<" "
        int cnt = 0;
        while (temp)
        {
            cnt += temp & 1;
            temp >>= 1;
        }
        if (cnt <= k)
        {
            ans++;
        }
    }
    cout<<ans;
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
