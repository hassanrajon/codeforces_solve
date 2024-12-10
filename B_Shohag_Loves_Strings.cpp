#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    bool ok = false;
    string ans;
    for (int i = 0; i + 1 < n; i++)
    {
        if (s[i] == s[i + 1])
        {
            ans.push_back(s[i]);
            ans.push_back(s[i + 1]);
            cout << ans << '\n';
            ok = true;
            return;
        }
    }
    for (int i = 0; i + 2 < n; i++)
    {
        if (s[i] != s[i + 1] && s[i + 1] != s[i + 2] && s[i] != s[i + 2])
        {
            ans.push_back(s[i]);
            ans.push_back(s[i + 1]);
            ans.push_back(s[i + 2]);
            cout << ans << "\n";
            ok = true;
            return;
        }
    }
    if(!ok)cout<<(-1)<<'\n';

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
