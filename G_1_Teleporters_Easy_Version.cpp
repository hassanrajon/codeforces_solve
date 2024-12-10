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
   ll n,c;
   cin>>n>>c;
   vector<ll>vec(n+1,0);
   for(int i=1;i<=n;i++){
    cin>>vec[i];
    vec[i]+=i;
   }
   sort(vec.begin(),vec.end());
   ll ans=0;
   for(int i=1;i<=n;i++){
    if(vec[i]<=c){
        c-=vec[i];
        ans++;
    }else break;
   }
   cout<<ans;nl
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
