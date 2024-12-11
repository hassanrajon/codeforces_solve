#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n, k;
    cin >> n >> k;
    ll ans = 0;
    if (k > n or k == 1)
    {
        ans = n;
    }
    else
    {
       
        while (n > 0)
        {
            ll base = k;
            while (base*k <= n)
            {
                base *= k;
                // cout<<n<<" "<<base<<" "<<'\n';
            }
            n-=base;
            ans++;
            if(n<k){
                ans+=n;
                break;
            }
           
        }
    }
    cout<<ans<<"\n";
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
