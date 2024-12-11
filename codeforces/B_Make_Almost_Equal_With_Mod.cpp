#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
 ll n;cin>>n;
 vector<ll>a(n);
 for(auto &it:a)cin>>it;
 ll ans=2;
 while(true){
    set<ll>st;
    for(auto it:a)st.insert(it%ans);
    if(st.size()==2)break;
    ans*=2;
 }
 cout<<ans<<'\n';
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
