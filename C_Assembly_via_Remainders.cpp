#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ll long long int
#define l long int
#define razon_hassan              \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
const int MOD1 = 127657753, MOD2 = 987654319;
const int p1 = 137, p2 = 277;
const int mod = 1000000007;

//===========================================================
void feel_the_world()
{
    ll n;
    cin>>n;
     n-=1;
     vector<ll>vec(n);
     for(ll i=0;i<n;i++){
        cin>>vec[i];
     }
     ll f = 1000000000;
     vector<ll>ans;
     ans.push_back(f);
     for(ll i =n-1;i>=0;i--){
       f-=vec[i];
       ans.push_back(f);
     }
     for(int i=n;i>=0;i--){
        cout<<ans[i]<<" ";
     }
     nl

}

//===========================================================
int main()
{
    razon_hassan
        l t = 1;
    cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}