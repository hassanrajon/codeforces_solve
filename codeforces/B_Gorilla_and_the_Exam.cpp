#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
    int n, k;cin >> n >> k;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int x;cin >> x;mp[x]++;    
    }
    vector<pair<int,int>>v;
    for(auto it:mp){
        v.push_back(make_pair(it.second,it.first));
    }
    sort(v.begin(),v.end());
    for(auto it:v){
        if(it.first<=k){
          mp.erase(it.second);
          k-=it.first; 
        }
    }
    cout <<(mp.size()==0?1:mp.size())<< '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
    }
}
