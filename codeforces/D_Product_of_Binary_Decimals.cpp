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
vector<ll> vec{1, 10, 11, 100, 101, 110, 111, 121, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111, 1210, 1221, 1331, 10000, 10001, 10010, 10011, 10100, 10101, 10110, 10111, 10201, 11000, 11001, 11010, 11011, 11100, 11101, 11110, 11111, 11121, 11211, 12100, 12111, 12210, 12221, 12321, 13310, 13431, 14641, 100000};
unordered_map<ll, bool> mp;
void prec()
{
    for (auto &it : vec)
    {
        mp[it] = true;
    }
}
//===========================================================
void feel_the_world()
{
  ll x;
  cin>>x;
  if(mp[x]){
    yes
  }else{
    no
  }
}

//===========================================================
int main()
{
    razon_hassan
    prec();
    l t = 1;
    cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
