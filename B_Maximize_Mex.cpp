#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
int n,x;cin>>n>>x;
vector<int>a(n);
for(auto &it:a)cin>>it;
map<ll,ll>mp,hash;
for(auto it:a)hash[it]++;
ll ans=0;
while(true){
    if(hash[ans]>0){
        hash[ans]--;
        mp[ans%x]+=hash[ans];
        ans++;
    }else if(mp[ans%x]>0){
       mp[ans%x]--;
       ans++;
    }else{
        break;
    }
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
