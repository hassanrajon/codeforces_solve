#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
  ll n;cin>>n;
  string s;
  cin>>s;
  ll cnt_1=0,cnt_2=0;
  for(int i=0;i<n;i++){
    if(s[i]=='_'){
        cnt_2++;
    }else{
        cnt_1++;
    }
  }
  ll ans=0;
  if(cnt_1>=2){
   ll first = cnt_1/2;
   ll last = (cnt_1/2)+(cnt_1%2);
//    cout<<first<<" "<<last<<endl;
  ans = first*(cnt_2*last);
  }
//   cout<<cnt_1<<" "<<cnt_2<<endl;
  cout<<ans<<'\n';
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
