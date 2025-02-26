#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
   int n,k,p;
   cin>>n>>k>>p;
   int neg=n*p*-1;
   int pos=-neg;
   if(k>pos || k<neg){
    cout<<"-1"<<endl;
   }else{
    k=abs(k);
    int ans=(k/p)+(k%p!=0);
    cout<<ans<<endl;
   }
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
