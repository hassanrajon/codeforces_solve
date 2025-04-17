#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
    int n,k;cin>>n>>k;
    if(n==1 && k==1){
        cout<<1<<'\n'<<1;nl return;
    }
    if(k==1 || k==n){
        cout<<(-1);nl return;
    }else{
        cout<<3;nl 
        cout<<1<<' '<<k<<' '<<k+1;nl
    }

}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
