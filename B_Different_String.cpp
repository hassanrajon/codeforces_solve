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
   int cnt =1;
   char a=s[0];
   for(int i=1;i<s.size();i++){
    if(s[i]==a){
        cnt++;
    }
   }
   if(cnt==s.size()){
    no
    return;
   }
   for(int i=0;i<s.size()-1;i++){
      if(s[i]!=s[i+1]){
        swap(s[i],s[i+1]);
      }
   }
   yes
   cout<<s<<endl;
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
