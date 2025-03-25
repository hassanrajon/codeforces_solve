#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a << " = " << (a) << '\n';
#define nl cout << '\n';
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n), freq(10,0);
    for (auto &it : arr)
        cin >> it;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
        if (freq[0] >=3 && freq[1] >= 1 && freq[2] >=2 && freq[3] >= 1 && freq[5] >= 1)
        {
            cout << (i+1);
            nl return;
        }
    }
    cout << 0;
    nl return;
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
