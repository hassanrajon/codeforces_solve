#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a << " = " << (a) << '\n';
#define nl cout << '\n';
#define yes cout << "YES\n";
#define no cout << "NO\n";
void solve()
{
    int n;
    cin >> n;
    map<int, int> a, b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x]++;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b[x]++;
    }
    if (a.size() > 2 || b.size() > 2)
    {
        yes
    }
    else if (a.size() > 1 && b.size() > 1)
    {
        yes
    }
    else
    {
        no
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tt = 1;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}
