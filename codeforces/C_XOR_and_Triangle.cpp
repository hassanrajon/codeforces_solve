#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
void solve()
{ 
   int n;cin>>n;
   vector<int>arr;
   int cnt=0;
   while(n){
    cnt+=n%2;
    arr.push_back(n%2);
    n=n/2;
   }
   if(cnt==arr.size() || cnt==1){
     cout<<(-1);nl
   }else{
     reverse(all(arr));
    //  for(auto it:arr)cout<<it<<' ';nl
     int on=0;
     int y=0;
     for(int i=0;i<arr.size();i++){
        if(arr[i]){
        y=(1<<arr.size()-i-1);
        break;
        }
     }
     y=y-1;
     cout<<y;nl
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
