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
    ll mx = 0;
    vector<ll> vec(n),mxv(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> vec[i];
          mx = max(mx,vec[i]);
        mxv[i]=mx;
      
    }
    vector<ll> pre(n);
    pre[0]=vec[0];
    for (ll i = 1; i < n; i++)
    {
        pre[i] = (vec[i] + pre[i - 1]);
    }
    ll cnt = 0;
    for(ll i =0;i<n;i++){
        if(pre[i]-mxv[i]==mxv[i]){
            cnt++;
        }
    }
    cout<<cnt<<endl;

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
