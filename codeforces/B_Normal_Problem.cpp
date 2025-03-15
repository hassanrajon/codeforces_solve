#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
  string s;cin>>s;
 for(int i=0;i<s.size();i++){
    if(s[i]=='p'){
        s[i]='q';
    }else if(s[i]=='q'){
        s[i]='p';
    }
 }
 reverse(s.begin(),s.end());
 cout<<s<<'\n';
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
