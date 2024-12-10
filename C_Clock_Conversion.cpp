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
    string str;
    cin >> str;
    string first = str.substr(0, 2);
    bool found = true;
    ll x = stoll(first);

    if (x == 0)
        cout << "12";
    else if (x == 12)
        found = false, cout << "12";
    else if (x > 12)
    {
        found = false;
        string second = to_string(x - 12);
        if (second.size() == 1)
            cout << '0';
        cout <<second;
    }
    else
        cout << first;

    cout << ':' << str[3] << str[4] << " ";

    if (found)
        cout << "AM";
    else
        cout << "PM";

    nl
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
