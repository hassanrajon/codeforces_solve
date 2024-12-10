#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
   int n;cin>>n;
   vector<int>vec(n);
   for(auto &it:vec)cin>>it;
   int ans = 0;
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(vec[i]==vec[j] && vec[i]!=0){
            ans++;
            vec[i]=0;
            vec[j]=0;;
        }
    }
   
   }
    cout<<ans<<'\n';
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
