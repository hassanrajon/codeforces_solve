#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
    int n;cin>>n;
    vector<int>arr(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    vector<int>freq(n);
    for(int i=0;i<n;i++){
        if(mp[arr[i]]==1){
            freq[i]=1;
        }
    }
    int mx=0,l=0,r=0,cnt=0;
    // for(auto it:freq)cout<<it<<" ";
    for(int i=0;i<n;i++){
        if(freq[i]==1){
          cnt++;
          if(cnt>mx){
            r=i;
            l=r-cnt+1;
            mx=cnt;
          }
        }else{
            cnt=0;
        }
    }
    if(mx){
        cout<<(l+1)<<" "<<(r+1)<<'\n'; 
    }else{
        cout<<mx<<'\n';
    }
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
