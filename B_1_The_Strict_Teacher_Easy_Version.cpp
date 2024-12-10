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
   int n,m,q,a1,a2,b1;
   cin>>n>>m>>q;
   cin>>a1>>a2>>b1;
   if(a2<a1)swap(a1,a2);
   int ans=0;
   if(b1<a1){
    ans=a1-1;
   }else if(b1>a2){
        ans=n-a2;
   }else{
    ans=abs(a1-a2)/2;
   }
   cout<<ans<<'\n';
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
