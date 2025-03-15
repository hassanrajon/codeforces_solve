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
    int n,x;cin>>n>>x;
    vector<int>arr(n);
    for(auto &it:arr)cin>>it;
    ll sum=accumulate(arr.begin(),arr.end(),0ll);
    if(sum%n==0 && sum/n==x){
        yes
    }else{
        no
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
