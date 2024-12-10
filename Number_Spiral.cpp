#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define pb push_back
#define pp pop_back
#define ll unsigned long long int
#define l long int
//===========================================================
void feel_the_world()
{
    ll r,c;
    cin>>r>>c;
    ll ans=0;
    if(r>c){
         if(r&1){
          ans = (r-1)*(r-1)-c;
         }else{
            ans = r*r - c+1;
         }
    }else{
        if(c&1){
            ans = (c*c)-r+1;
        }else{
            ans = (c-1)*(c-1)-r;
        }
    }
    cout<<ans<<"\n";
}

//===========================================================
int main()
{
    l t=1;
    cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
