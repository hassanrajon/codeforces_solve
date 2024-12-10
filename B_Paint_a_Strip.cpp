#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{

    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "1" << '\n';
        return;
    }
    else if (n >= 2 && n <= 4)
    {
        cout << "2" << '\n';
    }
    else
    {
        int step = 2, l = 5, r = 0;
        while(r<n){
            r = 2*l;
            l=r+1;
            step++;
        }
        cout << step << '\n';
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
