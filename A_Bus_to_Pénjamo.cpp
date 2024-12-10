#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{ 
    ll n,r;cin>>n>>r;
    vector<ll>a(n);
    ll ans=0,odd=0;
    for(auto &it:a){
        cin>>it;
        if(it&1){ans+=(it-1);r-=(it-1)/2;odd++;}
        else {ans+=it;r-=it/2;}
    }
    // cout<<ans<<" "<<odd<<" "<<r<<endl;
    if(r>=odd){
        ans+=odd;
    }else{
        int x = odd-r;
    ans+=r-x;
    }
    cout<<ans<<"\n";
}
int main()
{   ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}
