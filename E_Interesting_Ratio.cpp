#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
const ll limit=1e7+5;
vector<ll>primes;
ll check[limit];
void sieve(){
    for(ll i=2;i<limit;i++){
        if(check[i]==0){
            primes.push_back(i);
            for(ll j=i*i;j<limit;j+=i){
                check[j]=1;
            }
        }
    }
}
void solve()
{ 
   ll n;cin>>n;
   ll ans=0;
   for(auto it:primes){
    if(it>n)break;
    ans+=(n/it);
   }
   cout<<ans;nl
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tt=1;
    cin >> tt;
    sieve();
    while (tt--){
        solve();
     }
}
