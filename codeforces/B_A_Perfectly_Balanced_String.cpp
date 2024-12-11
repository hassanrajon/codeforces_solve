#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve()
{
  string s;
  cin>>s;
  set<char>st;
  for(auto ch:s)
    st.insert(ch);
  bool found = true;
  for(int i=0;i<s.size();i++)
    if(s[i]!=s[i%(int)st.size()])
       found=false;
  cout<<(found?"YES\n":"NO\n"); 
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
