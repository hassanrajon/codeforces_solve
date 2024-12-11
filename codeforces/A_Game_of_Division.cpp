#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
  int n,k;cin>>n>>k;
  vector<int>v(n);
  for(auto &it:v)cin>>it;
  
 for(int i=0;i<n;i++){
    bool ok = true;
    for(int j=0;j<n;j++){
        if(i!=j){
            int temp = abs(v[i]-v[j]);
            if(temp%k==0){
              ok = false;
            }

        }
    }
    if(ok){
        cout<<"YES\n"<<(i+1)<<"\n";
        return;
    }
 }
  cout<<"NO\n";

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
