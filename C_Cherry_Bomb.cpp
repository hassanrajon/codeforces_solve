#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{  
        ll n,k;cin>>n>>k;
        vector<ll> a(n),b(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++) cin>>b[i];
        bool ok=true;
        ll sum=-1;
        for(ll i=0;ok && i<n;i++)
        {
            if(a[i]> -1 && b[i]> -1)
            {
                if(sum> -1 && (a[i]+b[i])!=sum) ok=false;
                else sum=a[i]+b[i];
            }
        }
        ll mx=*max_element(a.begin(),a.end());
        ll mn =*min_element(a.begin(),a.end());
        if(ok)
        {
            if(sum> -1)
            {
                if(sum<mx || (sum-mn)>k) cout<<0;
                else cout<<1;
            }
            else cout<<k-(mx-mn)+1;
        }
        else cout<<0;nl
}
int32_t main()
{   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
