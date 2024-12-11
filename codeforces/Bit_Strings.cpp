#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define pb push_back
#define pp pop_back
#define ll long long int
#define l long int
const int mod = 1000000007;
//===========================================================
void feel_the_world()
{
    int n;
    cin>>n;
    ll ans=1;
    for(int i=0;i<n;i++){
      ans*=2;
      ans%=mod;
    }
    cout<<ans;
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
