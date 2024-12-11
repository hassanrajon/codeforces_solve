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
#define razon_hassan                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

//===========================================================
void feel_the_world()
{
   int n;
   cin >> n;
   string s;
   cin >> s;
   map<string, int> mp;
   for (int i = 0, j = 1; j < s.size(); j++, i++){
       string temp;
       temp += s[i];
       temp += s[j];
       mp[temp]++;
   }
   int max = 0;
   string ans;
   for (auto it : mp){
       if (it.second > max){
           max = it.second;
           ans = it.first;
       }
   }
   cout << ans;
   nl
}

//===========================================================
int main()
{   
    razon_hassan
    l t = 1;
    // cin >> t;
    while (t--){
        feel_the_world();
    }
    return 0;
}
