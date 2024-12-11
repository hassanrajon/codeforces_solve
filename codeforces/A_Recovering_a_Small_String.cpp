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
    int n;
    cin >> n;
    string s;
    for(char i='a'; i<='z'; i++){
        for(char j='a'; j<='z'; j++){
            for(char k='a'; k<='z'; k++){
                if((i-'a'+1) + (j-'a'+1) + (k-'a'+1) == n){
                  s.push_back(i);
                  s.push_back(j);
                  s.push_back(k);
                  cout << s << endl;
                  return; 
                }
            }
        }
    }
   
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
