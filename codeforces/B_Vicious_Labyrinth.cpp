#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
   int n,k;cin>>n>>k;
   if(k&1){
    for(int i=1;i<=n;i++){
        if(i==n){
            cout<<(n-1)<<" ";
        }else{
            cout<<(n)<<" ";
        }
    }

   }else{
    for(int i=1;i<=n;i++){
        if(i==n-1){
            cout<<(n)<<" ";
        }else{
            cout<<(n-1)<<" ";
        }
    }
   }
   nl
   
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
