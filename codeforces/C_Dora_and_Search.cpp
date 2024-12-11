#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
    int n;cin>>n;
    vector<int>v(n);
    for(auto &it:v)cin>>it;
    int lo=0,hi=n-1,mn=1,mx=n;
    while(lo<=hi){
        if(v[lo]==mn){
            lo++,mn++;
        }else if(v[lo]==mx){
            lo++,mx--;
        }else if(v[hi]==mn){
            mn++,hi--;
        }else if(v[hi]==mx){
            hi--,mx--;
        }else{
            cout<<(lo+1)<<" "<<(hi+1)<<'\n';
            return;
        }
    }
    cout<<(-1)<<'\n';
    return;

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
