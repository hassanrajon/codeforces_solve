#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
    ll n,m,l;cin>>n>>m>>l;
    vector<pair<ll,ll>>hurdles;
    vector<pair<ll,ll>>power;
    for(int i=0;i<n;i++){
        ll x,y;cin>>x>>y;
        hurdles.push_back(make_pair(x,y));
    }
    for(int i=0;i<m;i++){
        ll x,y;cin>>x>>y;
        power.push_back(make_pair(x,y));
    }
    
    priority_queue<ll>pq;
    bool ok = true;
    ll ind=0;
    ll jump=1,ans=0;
    for(int i=0;ok && i<n;i++){

        ll x = hurdles[i].second-hurdles[i].first+1;
        while (hurdles[i].first>power[ind].first && ind<m)
        {
           pq.push(power[ind].second);
           ind++;
        }
        while(jump<=x && !pq.empty()){
            jump+=pq.top();
            ans++;
            pq.pop();
        }
       if(x>=jump)ok = false;
        
    }

    if(!ok){
        cout<<(-1)<<'\n';
    }else{
        cout<<ans<<'\n';
    }
    
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
