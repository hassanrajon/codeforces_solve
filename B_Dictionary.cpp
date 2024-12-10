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
}

//===========================================================
int main()
{
    razon_hassan
        l t = 1;
    cin >> t;
    string s = "aa";
    int cnt = 1;
    map<string, int> mp;
    for (s[0] = 'a'; s[0] <= 'z'; s[0]++)
    {
        for (s[1] = 'a'; s[1] <= 'z'; s[1]++)
        {
            if (s[0] != s[1])
            {
                mp[s] = cnt++;
            }
        }
    }
    while (t--)
    {
        string x;
        cin >> x;
        cout << mp[x] << endl;
    }
}
