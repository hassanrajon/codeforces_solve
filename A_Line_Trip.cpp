#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define pb push_back
#define pp pop_back
#define ll long long int
#define l long int
const int mod = 1000000007;
#define razon_hassan                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

//===========================================================
void feel_the_world()
{
   int n,x;
   cin>>n>>x;
   vector<int>vec;
   vec.pb(0);
   for(int i=0;i<n;i++){
      int p;
      cin>>p;
      vec.pb(p);
   }
   vec.pb(x);
   int ans=0;
   for(int i=0;i<vec.size()-1;i++){
        if(i==n){
            if(2*(vec[i+1]-vec[i])>=ans){
                ans = 2*(vec[i+1]-vec[i]);
            }
        }else{
              ans=max(ans,vec[i+1]-vec[i]);
            }
   }
   cout<<ans;
   nl

}

//===========================================================
int main()
{   razon_hassan
    l t=1;
    cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
