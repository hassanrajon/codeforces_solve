#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
#define all(r) r.begin(), r.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";
void solve()
{ 
  int n;cin>>n;
  vector<ll>arr(n);
  for(auto &it:arr)cin>>it;
  sort(arr.begin(),arr.end());
  if(arr[0]==arr[1]){
    yes return;
  }
  vector<ll>temp;
  for(int i=1;i<n;i++){
    if(arr[i]%arr[0]==0){
        temp.push_back(arr[i]);
    }
  }
  if(temp.size()<2){
    no return;
  }else{
    ll x = temp[0];
    for(int i=1;i<temp.size();i++){
        x=__gcd(x,temp[i]);
    }
    if(x==arr[0]){
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
