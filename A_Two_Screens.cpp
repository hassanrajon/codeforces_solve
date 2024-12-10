#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
  string f;cin>>f;
  string s;cin>>s;
  int cnt=0;
  while(cnt < min(f.size(), s.size()) && f[cnt]==s[cnt])cnt++;
  cout<<(f.size()+s.size()-cnt+(cnt>0?1:0))<<'\n';
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
