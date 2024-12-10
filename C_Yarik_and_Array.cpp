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
   ll n;
   cin>>n;
   ll arr[n+1];
   for(ll i=0;i<n;i++){
    cin>>arr[i];
   }
   ll max_sum=INT64_MIN,current_sum=arr[0];
   ll mx=max(INT64_MIN,arr[0]);
   for(ll i=1;i<n;i++){
    mx=max(mx,arr[i]);
    if(current_sum<0)current_sum=0;
    if((arr[i]+arr[i-1])&1){
      current_sum+=arr[i];
    //   if(current_sum<0)
    //     current_sum=0;
      max_sum=max(current_sum,max_sum);
    }else{
        current_sum=arr[i];
    }
   }
   cout<<max(mx,max_sum)<<'\n';
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
