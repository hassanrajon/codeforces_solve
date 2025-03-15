#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a << " = " << (a) << '\n';
#define nl cout << '\n';

void solve() { 
    int n, m;
    cin >> n >> m;
    vector<int> wt(n), p(n);
    for (auto &it : wt) cin >> it;
    for (auto &it : p) cin >> it;

    vector<vector<int>> v(n  + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= m; w++) {
            if (wt[i-1] <= w) {  
                v[i][w] = max(p[i-1] + v[i-1][w - wt[i-1]], v[i-1][w]);
            } else {
                v[i][w] = v[i-1][w];
            }
        }
    }

    int i = n, k = m, ans = 0;
    while (i > 0 && k > 0) { 
        if (v[i][k] != v[i-1][k]) {
            cout<<"item "<<(i)<<" weight "<< wt[i-1]<<" profit "<<p[i-1]<<'\n';
            ans += p[i-1]; 
            k -= wt[i-1];  
        }
        i--;
    }
    nl
    cout<<"matrix: "<<'\n';
    for(auto it:v){
        for(auto ti:it){
            cout<<ti<<" ";
        }
        nl
    }
    nl
    cout<<"maximum profit: " << ans << '\n';
}

int main() {   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tt = 1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
}
