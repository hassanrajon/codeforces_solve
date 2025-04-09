#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
    string s;cin>>s;
    int cnt=0,right=0;
    for(int i=s.size()-1;i>=0;i--){
         if(s[i]!='0'){
            right=i;
            break;
         }
         cnt++;
    }
   for(int i=0;i<right;i++){
    if(s[i]!='0'){cnt++;}
   }
   cout<<cnt;nl
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
