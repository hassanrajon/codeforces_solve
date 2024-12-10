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
    ll a[n], pre[n], sorted_a[n], s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sorted_a[i] = a[i];
    }
    sort(sorted_a, sorted_a + n);
    for (int i = 0; i < n; i++)
    {
        pre[i] = s, s += sorted_a[i];
    }
    map<int,int>mp;
    mp[sorted_a[n-1]]=n-1;
    for(int i=n-2;i>=0;i--){
        if(pre[i+1]>=sorted_a[i+1])
        mp[sorted_a[i]]=mp[sorted_a[i+1]];
        else
         mp[sorted_a[i]]=i;
    }
    for(int i=0;i<n;i++)cout<<mp[a[i]]<<" ";nl
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
