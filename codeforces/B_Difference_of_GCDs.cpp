#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ll long long int
#define razon_hassan                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
const int MOD1 = 127657753, MOD2 = 987654319;
const int p1 = 137, p2 = 277;
const int mod = 1000000007;


//===========================================================
void feel_the_world()
{
   ll n,l,r;
     cin>>n>>l>>r; 
     vector<ll>vec; 
     bool not_found = true;
      for(ll i=1;i<=n;i++){
       ll x = (((l-1)/i)+1 ) *i;
       if(x<=r ){
        vec.push_back(x);
       }else{
        not_found=false;
        break;
       }
      }
      if(not_found){
       yes
       for(auto it:vec)cout<<it<<" ";
       nl
      }else{
        no
      }
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
