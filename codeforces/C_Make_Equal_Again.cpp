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
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt1 = 1, cnt2 = 1, ans = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[0])
        {
            cnt1++;
        }
        else
        {
            break;
        }
    }
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] == arr[n - 1])
        {
            cnt2++;
        }
        else
        {
            break;
        }
    }
    // cout<<cnt1<<" "<<cnt2<<endl;
    if (cnt1 == n)
    {
        ans = 0;
    }
    else if (cnt1 == cnt2)
    {
        if (arr[0] == arr[n - 1])
        {
            ans = n - (cnt2 + cnt1);
        }
        else
        {
            ans = n - cnt1;
        }
    }
    else if (arr[0] == arr[n - 1])
    {
        ans = n-(cnt1+cnt2);
    }
    else if (cnt1 > cnt2)
    {
        ans = n - cnt1;
    }
    else
    {
        ans = n - cnt2;
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