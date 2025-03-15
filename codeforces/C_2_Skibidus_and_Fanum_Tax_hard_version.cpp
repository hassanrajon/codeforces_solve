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
   sort(b.begin(),b.end());
   int prev=INT_MIN;
   for(int i=0;i<n;i++){
      auto newValue = lower_bound(b.begin(),b.end(),(prev+a[i]));
      if(newValue!=b.end()){
         if(a[i]<prev){
            a[i]=*newValue-a[i];
         }else{
            a[i]=min((*newValue-a[i]),a[i]);
         }
      }
      if(a[i]<prev){
         no return;
      }
      prev=a[i];
   }
   yes
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
