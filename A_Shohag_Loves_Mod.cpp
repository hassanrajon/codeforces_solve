#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
    int n;cin>>n;
    vector<int>v;
    for(int i=1;i<=n;i++){
    v.push_back((i*2)-1);

    }
    for(auto it:v)cout<<it<<" ";
    cout<<'\n';
    
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
