#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
    int n,k;cin>>n>>k;
    vector<int>a(n);
    for(auto &it:a)cin>>it;
    sort(a.begin(),a.end());
    int ans=0;
    for(int l=0,r=0;l<n;l++){
        r=max(r,l+1);
        while(r<n && a[r]-a[l]<k && a[r]<=a[r-1]+1)r++;
        ans = max(ans,r-l);
    }
    cout<<ans<<'\n';
}
int main()
{   ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt=1;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}
