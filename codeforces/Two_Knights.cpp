#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define pb push_back
#define pp pop_back
#define ll long long int
#define l long int
//===========================================================
void feel_the_world()
{
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++){
       ll ans = (((i*i)*(i*i-1))/2)-4*(i-2)*(i-1);
       cout<<ans;
       nl
    }
}

//===========================================================
int main()
{
    l t=1;
    // cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
