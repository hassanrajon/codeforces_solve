#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
   vector<ll>v;
   for(int i=0;i<10;i++){
     ll x;cin>>x;v.push_back(x);

   }
   for(auto it:v)cout<<it<<" ";
}
int main()
{   ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tt=1;
    // cin >> tt;
    while (tt--)
    {
        solve();
    }
}
