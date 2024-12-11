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
    int n;
    cin >> n;
    map<string, int> mp;
    mp["00"] = mp["01"] = mp["10"] = mp["11"] = 1e9;
    int ans = 1e9;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        string s;
        cin >> s;
        mp[s] = min(mp[s], x);
    }
    if (min(mp["11"], mp["10"] + mp["01"]) > (int)1e6)
    {
        cout << "-1\n";
    }
    else
    {
        cout << min(mp["11"], mp["10"] + mp["01"]) << "\n";
    }
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
