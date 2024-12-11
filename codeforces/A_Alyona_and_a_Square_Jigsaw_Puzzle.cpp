#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
        cin >> it;
    int ans = 0;
    //    for(auto it:v)cout<<it<<" ";
    vector<int> sq;
    sq.push_back(0);
    for (int i = 1; i <= 99; i += 2)
    {
        sq.push_back(i * i);
    }
    //    for(auto it:sq)cout<<it<<" ";
    int total = 0;
    int layer = 1;
    for (int i = 0; i < n; i++)
    {
        total += v[i];
        int have = total - sq[layer - 1];
        int need = (layer == 1) ? 1 : (layer + (layer - 1)) * (layer + (layer - 1)) - (sq[layer - 1]);
        cout << "layer: " << layer << '\n';
        cout << "sq: " << sq[layer - 1] << '\n';
        cout << "total: " << total << "\n";
        cout << "have: " << have << "\n";
        cout << "need: " << need << '\n';
        cout << '\n';
        if (have == need)
        {
            layer++;
            ans++;
        }
        else if (have > need)
        {
            while (have > need)
            {
                layer++;
                have -= need;
                need = (layer == 1) ? 1 : (layer + (layer - 1)) * (layer + (layer - 1)) - (sq[layer - 1]);
            }
        }
    }
    cout << ans << '\n';
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
