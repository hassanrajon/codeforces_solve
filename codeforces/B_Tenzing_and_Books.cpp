#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "Yes\n";
#define no cout << "No\n";
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
    int n, x;
    cin >> n >> x;
    int s = 0;
    for (int i = 0; i < 3; i++)
    {
        vector<int> vec(n);
        for (auto &it : vec)cin>>it;
        for(auto it:vec){
            if((x|it)!=x)break;
            s|=it;
        }
    }
    if (s == x)
        yes else no
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
