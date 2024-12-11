#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  string s;cin>>s;
  int ans=0,f_l=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='L'){f_l++;ans=max(ans,f_l);}
    else f_l=0;
  }
  cout<<(ans+1)<<'\n';
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
