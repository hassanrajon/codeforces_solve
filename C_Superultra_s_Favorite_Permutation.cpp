#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;cin>>n;
    if(n<5){
        cout<<(-1)<<'\n';
        return;
    }
   vector<int>ans;
   for(int i=2;i<=n;i+=2){
     if(i!=4){
        ans.push_back(i);
     }
   }
   ans.push_back(4);
   ans.push_back(5);
   for(int i=1;i<=n;i+=2){
    if(i!=5){
        ans.push_back(i);
    }
   }
   for(auto it:ans)cout<<it<<" ";
   cout<<'\n';

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tt = 1;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}
