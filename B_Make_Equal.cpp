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
    ll n, sum = 0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    ll base = sum / n, u = 0;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == base)
        {
            continue;
        }
        else if (arr[i] > base)
        {
            u += arr[i] - base;
        }
        else if (arr[i] < base)
        {
            if(u>=(base-arr[i])){
                u-=(base-arr[i]);
            }else{
                found = true;
                break;
            }
        }
    }
    if(found){
        no
    }else{
        yes
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
