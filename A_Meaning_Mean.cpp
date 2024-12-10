#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
 int n;cin>>n;
 vector<int>vec(n);
 for(auto &it:vec)cin>>it;
 while(vec.size()>1){
  sort(vec.begin(),vec.end());
  vec[0]=(vec[0]+vec[1])/2;
  vec.erase(vec.begin()+1);
 }
 cout<<vec[0]<<endl;
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
