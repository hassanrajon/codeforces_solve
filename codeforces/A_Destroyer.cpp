#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
#define all(r) r.begin(), r.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";
void solve()
{ 
   int n;cin>>n;
   vector<int>fr(101);
   for(int i=0;i<n;i++){
    int x;cin>>x;fr[x]++;
   }
   int prev=0;
   for(int i=1;i<fr.size();i++){
    if(fr[i]>fr[i-1]){
          no return;
    }
   }
   yes
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
