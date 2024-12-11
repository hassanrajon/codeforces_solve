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
    vector<pair<int, int>> vec;
    int j = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if (j == -1 || vec[j].first != s[i])
        {
            vec.push_back({s[i], 1});
            j++;
        }
        else
        {
            vec[j].second++;
        }
    }
    int ans =INT_MAX;
    for(int i=1;i<j;i++){
        if(vec[i-1].first!=vec[i+1].first){
            ans = min(ans,vec[i].second+2);
        }
    }
    ans==INT_MAX?cout<<"0\n":cout<<ans<<'\n';
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
