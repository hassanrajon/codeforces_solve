#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define pb push_back
#define pp pop_back
#define ll long long int
#define l long int
//===========================================================
void feel_the_world()
{
    ll x, n;
    cin >> x >> n;
    ll remain = n - (n % 4) + 1;
    ll p = n % 4;

    while (p--)
    {
        if (x % 2)
            x += remain;
        else
         x-=remain;

         remain++;
    }
    cout<<x<<"\n";
}

//===========================================================
int main()
{
    l t = 1;
    cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
