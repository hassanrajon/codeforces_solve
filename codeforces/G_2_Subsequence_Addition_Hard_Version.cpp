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
   vector<ll>vec(n);
   for(auto &it:vec)cin>>it;
   sort(vec.begin(),vec.end());
   if(vec[0]!=1){
    no
        return;
   }
   ll sum=vec[0];
//    for(auto it:vec)cout<<it<<" ";
   for(int i=1;i<n;i++){
    if(sum<vec[i]){
        no
        return;
    }
    sum+=vec[i];
   }
   yes
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
