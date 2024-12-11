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
  
    ll ans =0;
    
    for(int i=2;i<30;i++){
        ans = (1<<i)-1;
        if(n%ans==0){
            
            break;
        }
    }
    cout<<n/ans<<"\n";
    
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
