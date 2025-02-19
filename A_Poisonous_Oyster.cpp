#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
    string s1,s2;cin>>s1>>s2;
    int ans=0;
    if(s1==s2){
        if(s1=="fine"){
            ans=4;
        }else{
            ans=1;
        }
    }else{
        if(s1=="fine"){
            ans=3;
        }else{
            ans=2;
        }
    }
    cout<<ans<<'\n';
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    // cin >> tt;
    while (tt--){
        solve();
     }
}
