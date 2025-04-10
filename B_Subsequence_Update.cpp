#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define ff first
#define ss second
#define pb push_back
void solve()
{ 
    int n,l,r;cin>>n>>l>>r;l--;
    vector<int>arr(n);
    for(auto &it:arr)cin>>it;
    vector<int>first,second;
    for(int i=0;i<r;i++){
        first.pb(arr[i]);
    }
    for(int i=l;i<n;i++){
        second.pb(arr[i]);
    }
   sort(all(first));sort(all(second));
   ll f=0,s=0;
   int k=r-l-1,i=0;
   while(i<=k){f+=(first[i]);s+=(second[i]);i++;}
   cout<<min(f,s);nl
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
 