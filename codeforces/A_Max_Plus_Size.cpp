#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ll long long int
#define razon_hassan                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
const int mod = 1000000007;
//===========================================================
void feel_the_world()
{
   ll n;cin>>n;
   vector<ll>vec(n);
   for(auto &it:vec)cin>>it;
   ll mx1 = 0,cnt1=0,mx2=0,cnt2=0;
   for(int i=0;i<n;i+=2){
    mx1=max(mx1,vec[i]);
    cnt1++;
   }
   for(int i=1;i<n;i+=2){
    mx2=max(mx2,vec[i]);
    cnt2++;
   }
   ll ans = max(mx1+cnt1,mx2+cnt2);
   cout<<ans<<'\n';

}
//===========================================================
int main()
{   razon_hassan
    ll t=1;
    cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
