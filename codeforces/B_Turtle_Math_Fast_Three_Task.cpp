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
    int arr[n];
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum % 3 == 0)
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            ll temp = sum;
            temp -= arr[i];
            if (temp % 3 == 0)
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            cout << 1 << endl;
            return;
        }
        else
        {
            int x = sum %3;
            if(x==1){
                cout<<2<<endl;
                return;
            }else{
                cout<<1<<endl;
                return;
            }
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
