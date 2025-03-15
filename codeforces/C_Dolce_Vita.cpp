#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll s = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
      s += a[i];
      if (s <= x) {
        ans += (x - s) / (i + 1) + 1;
      }
    }
    cout << ans << '\n';
}
int main()
{   ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}
