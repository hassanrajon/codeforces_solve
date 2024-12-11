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
    int ans=0,fp=5;
    while(n>=fp){
        ans+=n/fp;
        fp*=5;
    }
    cout<<ans;
    
}

//===========================================================
int main()
{
    l t=1;
    // cin >> t;
    while (t--)
    {   ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        feel_the_world();
    }
}
