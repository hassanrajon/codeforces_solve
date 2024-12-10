#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define pb push_back
#define pp pop_back
#define ll long long int
#define l long int
const int MOD1 = 127657753, MOD2 = 987654319;
const int p1 = 137, p2 = 277;
const int mod = 1000000007;
#define razon_hassan              \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

//===========================================================
void feel_the_world()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans;
    for(int i=n-2;i>=0;i-=2){
       ans.push_back(s[i]);
    } 
    int j=(n&1)?0:1;
    for(j;j<n;j+=2){
        ans.pb(s[j]);
    }
    cout<<ans<<endl;

    
}

//===========================================================
int main()
{
    razon_hassan
        l t = 1;
    // cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
