#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
  
   ll m,a,b,c;
   cin>>m>>a>>b>>c;
   ll ans=0;
   if(a>=m)ans+=m;
   else ans +=a;
   if(b>=m)ans+=m;
   else ans+=b;
   
   ll need = 2*m - ans ;
   if(c>need){
    ans+=need;
   }else ans+=c;
   cout<<ans<<'\n';

}
int main()
{   ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}
