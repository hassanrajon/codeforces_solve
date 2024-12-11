#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ll long long int
#define razon_hassan              \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
const int mod = 1000000007;
//===========================================================
void feel_the_world()
{
   ll n,q;cin>>n>>q;
   vector<ll>vec(n),qu(q);
   for(auto &it:vec)cin>>it;
   for(auto &it:qu)cin>>it;
   map<ll,ll>ans;
   ans[n-1]=1;
   for(ll i=1;i<n;i++){
    ll a = i*(n-i)+(n-1-i);
    ans[a]=ans[a]+1;
    if((vec[i]-vec[i-1]-1)>0){
    //   ll a = (vec[i]-vec[i-1]-1) * (n-i)*i;
      ans[(n-i)*i]+=vec[i]-vec[i-1]-1;
    }
   }
//    for(auto it:ans){
//     cout<<it.first<<" "<<it.second<<"\n";
//    }
   for(auto &it:qu){
    if(ans.count(it)){
        cout<<ans[it]<<" ";
    }else{
        cout<<"0"<<" ";
    }
   }
   nl
}
//===========================================================
int main()
{
    razon_hassan
        ll t = 1;
    cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
