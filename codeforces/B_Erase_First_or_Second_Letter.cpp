#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ll long long int
#define l long int
#define razon_hassan              \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
const int MOD1 = 127657753, MOD2 = 987654319;
const int p1 = 137, p2 = 277;
const int mod = 1000000007;
 
//===========================================================
void feel_the_world()
{   vector<int>arr(26,0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 0;
   
    for(int i=0;i<n;i++){
       if(!arr[s[i]-'a']){
        ans+=(n-i);
       }
       arr[s[i]-'a']=1;
    }
    cout<<ans<<'\n';
}

//===========================================================
int main()
{
    razon_hassan
        l t = 1;
    cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
