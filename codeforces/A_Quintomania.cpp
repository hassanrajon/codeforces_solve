#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
#define yes cout << "YES\n";
#define no cout << "NO\n";
void solve()
{
   int n;cin>>n;
   vector<int>v(n);
   for(auto &it:v)cin>>it;
   bool ok=true;
   for(int i=0;i<(n-1);i++){
     if(abs(v[i]-v[i+1])==7 || abs(v[i]-v[i+1])==5 ){
     continue;
     }else{
        ok=false;
     }
   }
   if(ok)yes else no
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
