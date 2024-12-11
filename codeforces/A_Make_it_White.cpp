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
#define razon_hassan                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

//===========================================================
void feel_the_world()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   int cnt=0;
   for(int i=0;i<n;i++){
     if(s[i]=='B'){
        break;
     }else{
        cnt++;
     }
   }
   for(int j=(n-1);j>=0;j--){
    if(s[j]=='B'){
        break;
    }else{
        cnt++;
    }
   }
   cout<<n-cnt<<"\n";
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
