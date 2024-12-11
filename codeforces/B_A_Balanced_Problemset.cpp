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
    ll x,n;
    cin>>x>>n;
    ll ans =0;
    for(ll i=1;i*i<=x;i++){
        if(x%i==0){
            if((x/i)>=n)
              ans = max(ans,i);
            if(i>=n)
                ans=max(ans,x/i);  
            
        }
    }
    cout<<ans;
    nl
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
