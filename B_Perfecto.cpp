
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}
void solve()
{ 
   ll n;cin>>n;
   ll x = (n*(n+1))/2;
   if(isPerfectSquare(x)){
    cout<<(-1);nl return;
   }else{
     ll ans=0;
     vector<int>temp;
     vector<int>index;
     for(int i=1;i<=n;i++){
        ans+=i;
        if(isPerfectSquare(ans)){
            index.push_back(i-1);
        }
        temp.push_back(i);
     }
     sort(index.begin(),index.end());
    //  for(auto it:index)cout<<it<<' ';nl
     for(auto it:index){
        if(it+1<n){
            swap(temp[it],temp[it+1]);
            // cout<<temp[it]<<" "<<temp[it+1];nl
        }else{
            cout<<(-1);nl return;
        }
     }
     
    //  for(auto it:temp){
    //     cout<<it<<' ';
    //  }nl
     
     for(auto it:temp){
        cout<<it<<" ";
     }nl
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
