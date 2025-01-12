#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
   int n;cin>>n;
   vector<int>v(n);
   for(auto &it:v)cin>>it;
   if(v[n-2]>v[n-1]){
    cout<<-1<<'\n';return;
   }
   if(is_sorted(v.begin(),v.end())){
    cout<<0<<'\n';
    return;
   }
   for(int i=0;i<n-2;i++){
    v[i]=v[n-2]-v[n-1];
   }
   if(!is_sorted(v.begin(),v.end())){
      cout<<-1<<'\n';
   }else{
    cout<<(n-2)<<'\n';
   for(int i=0;i<n-2;i++){
    cout<<i+1<<" "<<n-1<<" "<<n<<'\n';
   }
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
