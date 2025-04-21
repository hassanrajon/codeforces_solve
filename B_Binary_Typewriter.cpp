#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';

void solve()
{ 
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = count(s.begin(), s.end(), '0');
    if (cnt == n) {
        cout<<n;nl return;
    }else if(cnt==0){
        cout<<(n+1);nl return;
    }else{
       int diff=0;bool ok=false;
       if(s[0]=='1'){
        diff++;
        ok=true;
       }
       for(int i=1;i<n;i++){
        if(s[i]!=s[i-1])diff++;
       }
      if(s[0]=='0' && diff==1){
        cout<<(n+1);nl return;
      }
      diff-=2;
      if(cnt<n && diff==0){
        diff++;
      }
      cout<<(n+diff);nl return;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
    }
}
