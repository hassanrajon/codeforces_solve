#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ll long long int
#define l long int
#define razon_hassan                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
const int MOD1 = 127657753, MOD2 = 987654319;
const int p1 = 137, p2 = 277;
const int mod = 1000000007;


//===========================================================
void feel_the_world()
{
   string s;
   cin>>s;
   ll n = s.size();
   s+=s;
   ll max_len=0,curr_len=0;
   for(char c:s){
    curr_len=c=='1'?curr_len+1:0;
    max_len=max(curr_len,max_len);
   }
   ll ans=0;
   if(max_len>n)
    ans=n*n;
   else
    ans = ((max_len+1)/2)*((max_len+2)/2);
    cout<<ans<<'\n';
}

//===========================================================
int main()
{   razon_hassan
    l t=1;
    cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}