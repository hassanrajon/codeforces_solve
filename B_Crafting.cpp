#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
   int n;cin>>n;
   vector<int>first(n);
   vector<int>second(n);
   for(auto &it:first)cin>>it;
   for(auto &it:second)cin>>it;
   ll mn = INT32_MAX;
   ll cnt=0,need=0;
   for(int i=0;i<n;i++){
    if(second[i]>first[i]){
        need = second[i]-first[i];
        cnt++;
        
    }else{
        ll x = first[i]-second[i];
        mn=min(x,mn);  
    }
   }
//    cout<<mn<<" "<<extra<<endl;
   if(cnt>1){
    cout<<"NO\n";
   }else if(mn<need){
    cout<<"NO\n";
   }else{
    cout<<"YES\n";
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
