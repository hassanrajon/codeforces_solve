#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
    vector<int>v(5);
    cin>>v[0]>>v[1]>>v[3]>>v[4];
    int ans=0;
    v[2]=v[0]+v[1];
    int cnt=0;
    for(int i=0;i<3;i++){
        
        if(v[i+2]==v[i]+v[i+1]){
            cnt++;
        }
        
    }
    
    ans=max(ans,cnt);
    v[2]=v[3]-v[1];
    cnt=0;
    for(int i=0;i<3;i++){
        
        if(v[i+2]==v[i]+v[i+1]){
            cnt++;
        }
        
    }
     ans=max(ans,cnt);
     v[2]=v[4]-v[3];
     cnt=0;
     for(int i=0;i<3;i++){
        
        if(v[i+2]==v[i]+v[i+1]){
            cnt++;
        }
        
    }
    
    ans=max(ans,cnt);
    cout<<ans<<'\n';

}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
