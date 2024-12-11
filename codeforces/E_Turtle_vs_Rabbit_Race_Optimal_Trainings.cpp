#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ll long long int
// #define l long int
#define razon_hassan                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
const int MOD1 = 127657753, MOD2 = 987654319;
const int p1 = 137, p2 = 277;
const int mod = 1000000007;


//===========================================================
void feel_the_world()
{
   int n;
   cin>>n;
   vector<ll>vec(n);
   for(int i=0;i<n;i++)cin>>vec[i];
   vector<ll>pr(n);
   pr[0]=vec[0];
   for(int i=1;i<n;i++) pr[i]=pr[i-1]+vec[i];
   int q;
   cin>>q;
   while(q--){
    ll l,u;
    cin>>l>>u;
    l--;
    ll x = u;
    if(l>0)x+=pr[l-1];
    int lb=(lower_bound(pr.begin(),pr.end(),x)-pr.begin());
    if(lb<=l){
        cout<<l+1<<" ";
    }else if(lb>=n){
        cout<<n<<" ";
    }else{
         if(abs(pr[lb]-x)<=abs(pr[lb-1]-x)){
                cout<<lb+1<<" ";
            }
            else{
                cout<<lb<<" ";
            }
    }
   }
   nl
}

//===========================================================
int main()
{   razon_hassan
    int t=1;
    cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
