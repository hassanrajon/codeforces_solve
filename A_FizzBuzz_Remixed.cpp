#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
int limit=1e9;
void solve()
{ 
   int n;cin>>n;
   int temp=n/15;
   int ans=3*temp;
   for(int i=temp*15;i<=n;i++){
    if(i%3==i%5)ans++;
   }
   cout<<ans;nl
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
