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
    string s = "aeiou";
    int j = 0;
    int first = n / 5, last = n % 5;
    int v[5];
    for (int i = 0; i < 5; i++)
        v[i] = first;
    for (int i = 0; i < last; i++)
        v[i]++;
   
    for (int i = 0; i < 5; i++)
    {
        if (v[i])
        {
            for (int j = 0; j < v[i]; j++)
            {
                cout << s[i];
            }
        }
    }nl
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
