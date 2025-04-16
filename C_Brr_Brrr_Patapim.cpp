#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{  

    int n;cin>>n;
    vector<vector<int>> grid(n, vector<int>(n));
    for(auto &it:grid){
        for(auto &ti:it){
             cin>>ti;
        }
    }
    map<int,int>mp,fr;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mp[i+j+2]=grid[i][j];
                fr[grid[i][j]]++;
            }
        }
       for(int i=1;i<=(2*n);i++){
        if(fr.count(i)==0){
            // debug(i)
            mp[1]=i;
            break;
        }
       }
       for(auto it:mp)cout<<it.second<<' ';nl
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
