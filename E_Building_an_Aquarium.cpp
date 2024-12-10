#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ll long long int
#define l long int
#define razon_hassan                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
const int MOD1 = 127657753, MOD2 = 987654319;
const int p1 = 137, p2 = 277;
const int mod = 1000000007;

//===========================================================
void feel_the_world()
{
   ll n,x;
   cin>>n>>x;
   vector<ll>vec(n);
   ll ans=0,mn=INT64_MAX;
   for(auto &it:vec){
     cin>>it;
     mn=min(mn,it);
   }
   ll lo=0,hi=x+mn;
   while(lo<hi){
     ll height = (lo+hi)/2;
     ll water=0;
     for(auto &it:vec){
        if(it<height){
           water+=(height-it);
        }
     }
    //  cout<<height<<" "<<water<<'\n';
     if(water>x){
        lo=0,hi=height-1;
     }else{
        ans = max(ans,height);
        lo=height+1;
     }
   } 
   cout<<++ans<<'\n';
}

//===========================================================
int main()
{   razon_hassan
    l t=1;
    cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
