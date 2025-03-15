#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
#define yes cout << "YES\n";
#define no cout << "NO\n";
void solve()
{ 
  int n,m;cin>>n>>m;
  vector<int>a(n),b(m);
  for(auto &it:a)cin>>it;
  for(auto &it:b)cin>>it;
  if(is_sorted(a.begin(),a.end()) || is_sorted(a.begin(),a.end(),greater<int>())){
    yes
    return;
  }else{
    int first=0;
    bool found = false;
    for(int i=0;i+1<n;i++){
        if(a[i]>a[i+1]){
            int fs=b[0]-a[i];
            int ss=b[0]-a[i+1];
            if(fs<=a[i+1] && (fs>0)){
                a[i]=fs;
                
            }else if(ss>=a[i] && ss>0){
                a[i+1]=ss;
                
            }
        }
        
    }
    if(is_sorted(a.begin(),a.end())){
        yes
        return;
    }
    for(int i=0;i<first;i++){
        a[i]=b[0]-a[i];
    }
    // for(auto it:a)cout<<it<<' ';
    if(is_sorted(a.begin(),a.end())){
        yes
    }else{
        no
    }
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