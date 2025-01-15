#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n'; 
void solve()
{ 
int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      cnt += (s[i] == c);
    }
    if (cnt == n) {
      cout << 0 << '\n';
      return;
    }
    bool found = false;
    for (int d = 1; d <= n; d++) {
      int cc = 0;
      for (int i = d; i <= n; i += d) {
        cc += (s[i - 1] != c);
      }
      if (cc == 0) {
        cout << 1 << '\n';
        cout << d << '\n';
        found = true;
        break;
      }
    }
    if (!found) {
      cout << 2 << '\n';
      cout << n - 1 << " " << n << '\n';
    }
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--)
        solve();
    
}
