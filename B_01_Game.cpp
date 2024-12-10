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
{
    string s;
    cin >> s;
    int cnt_0=0,cnt_1=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0')cnt_0++;
         else cnt_1++;
    }
    int n= min(cnt_0,cnt_1);
   cout << ((n & 1) ? "DA" : "NET") << endl;

    
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
