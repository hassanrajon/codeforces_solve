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
vector<ll>vec;
void pre(){
    vector<ll>p{
     1,11,111,1111,11111,111111,1111111,11111111,111111111
    };
    for(auto it:p){
        for(ll i=1;i<=9;i++){
         vec.push_back(i*it);
        }
    }
}
//===========================================================
void feel_the_world()
{  ll n;
   cin>>n;
   int ans = upper_bound(vec.begin(),vec.end(),n)-vec.begin();
   cout<<ans<<'\n';
}

//===========================================================
int main()
{   razon_hassan
    pre();
    l t=1;
    cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
