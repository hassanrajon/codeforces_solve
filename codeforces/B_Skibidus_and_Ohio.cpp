#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
  string s;cin>>s;
  for(int i=0;i+1<s.size();i++){
    if(s[i]==s[i+1]){
        cout<<1<<'\n';
        return;
    }
  }
  cout<<s.length()<<'\n';
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
