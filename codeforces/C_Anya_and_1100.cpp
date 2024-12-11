#include <bits/stdc++.h>
using namespace std;
#define ll long long int  
#define yes cout << "YES\n";
#define no cout << "NO\n"; 
void solve()
{
  string s;cin>>s;
  set<int>st;int n=s.size();
  for(int i=0;i+3<n;i++)
   if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0')st.insert(i);
  int q;cin>>q;
  while(q--){
    int a;char x;cin>>a>>x;
    a--;
    if(s[a]!=x){
      for(int i=max(0,a-3);i<a+3;i++)
       if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0')st.erase(i);
      s[a]=x;
      for(int i=max(0,a-3);i<a+3;i++)
       if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0')st.insert(i);
    }
    if(st.size())yes else no
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
