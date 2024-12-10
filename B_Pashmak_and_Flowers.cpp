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
    ll n;
    cin >> n;
    vector<ll> vec(n);
    ll mn = INT_MAX, mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
        mn=min(mn,vec[i]);
        mx=max(mx,vec[i]);
    }
    ll cnt_mn=0,cnt_mx=0;
    for(int i=0;i<n;i++){
       cnt_mn+=(vec[i]==mn);
       cnt_mx+=(vec[i]==mx);
    }
    ll diff=mx-mn, result=0;
    if(diff==0){
        result = n*(n-1)/2;
    }else{
        result = cnt_mn*cnt_mx;
    }
    cout<<diff<<" "<<result;
}

//===========================================================
int main()
{
    razon_hassan
        l t = 1;
    // cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
