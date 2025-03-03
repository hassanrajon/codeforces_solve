#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
    ll n,x,y,sum=0;cin>>n>>x>>y;
    vector<int>arr(n);
    for(auto &it:arr){cin>>it;sum+=it;}
    ll xx=sum-y,yy=sum-x;
    sort(arr.begin(),arr.end());
    ll ans=0;
    for(int i=0;i<n;i++){
        int l=lower_bound(arr.begin(),arr.end(),xx-arr[i])-arr.begin();
        int r=upper_bound(arr.begin(),arr.end(),yy-arr[i])-arr.begin();
        ans+=(r-l);
        if(i>=l && i<r)ans--;
    }
    ans/=2;
    cout<<ans;nl
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
