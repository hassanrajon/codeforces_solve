#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
void solve()
{ 
   ll n;cin>>n;
   vector<ll>b(2*n),a;
   for(auto &it:b)cin>>it;
   sort(all(b));
//    for(auto it:b)cout<<it<<" ";nl 
   ll s=0;
   a.push_back(b[0]);
   for(int i=1;i<n;i++){
    a.push_back(b[i]);
    a.push_back(b[i+n-1]);
    s+=b[i+n-1]-b[i];
   }
   a.push_back(s+b[0]+b[2*n-1]);
   a.push_back(b[2*n-1]);
   for(auto it:a)cout<<it<<" ";nl
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
