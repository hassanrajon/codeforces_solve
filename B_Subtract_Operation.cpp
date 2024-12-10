#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n, a;
    cin >> n >> a;
    vector<int> v(n);
    for (int &x : v)
        cin >> x;
    bool ans = false;
    sort(v.begin(), v.end());
    int i = 0;
    int j = 1;
    while (j < n and i < n)
    {
        if (v[i] + a == v[j])
        {
            ans = true;
            break;
        }
        else if (v[i] + abs(a) < v[j])
            ++i;
        else
            ++j;
       
    }
     cout << (ans ? "YES" : "NO") << '\n';
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
