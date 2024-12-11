#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
    ll n,q;cin>>n>>q;
    vector<ll>v(n);
    for(auto &it:v)cin>>it;
    sort(v.rbegin(),v.rend());
    // for(auto it:v)cout<<it<<" ";
    // cout<<endl;
    for(int i=0;i<n;i++){
        v[i]=(i?v[i-1]:0)+v[i];
    }
    // for(auto it:v)cout<<it<<" ";
  while(q--){
    ll x;cin>>x;
    ll low = 0, high = n,ans=-1;
    while (low < high) {
        ll mid = low + (high - low) / 2; 
        if (v[mid] >= x) {
            high = mid;
        } else {
            low = mid + 1; 
        }
    }
    ans = low;
     if(ans==n)cout<<"-1\n";
     else cout<<(++ans)<<'\n';
  }

}
int main()
{   ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}
