#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<ll> a(m);
    for (auto &it : a)
        cin >> it;
    sort(a.begin(), a.end());
    vector<ll> gaps;
    if (m == 1)
    {
        gaps.push_back(n - 1);
    }
    else
    {
        // gaps.push_back(((n - a[m - 1]) + (a[0] - 1)));
        gaps.push_back(((n-a[m-1])+(a[0]-1)));
        for (int i = 1; i < m; i++)
        {
             gaps.push_back(((a[i]-a[i-1])-1));
        }
    }

    sort(gaps.begin(),gaps.end(),greater<ll>());
    int safe = 0;
    int spread = 0;
    for (int i = 0; i < gaps.size(); i++)
    {
        int take = gaps[i] - spread;
        if (take < 1)
        {
            break;
        }
        if (take == 1)
        {
            safe++;
            spread += 2;
        }
        else 
        {
            safe++;
            take -= 2;
            spread += 2;
            if (take == 1)
            {
                safe++;
                spread += 2;
            }
            else if (take > 1)
            {
                safe += take;
                spread += 2;
            }
        }
    }
    cout << (n - safe) << '\n';
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
