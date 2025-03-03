#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
    int n;
    cin >> n;
    
    vector<int> h(n);
    for (auto &x: h) cin >> x;
    
    int ans = h[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        ans = max(ans + 1, h[i]);
    }

    cout << ans ; nl;
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
