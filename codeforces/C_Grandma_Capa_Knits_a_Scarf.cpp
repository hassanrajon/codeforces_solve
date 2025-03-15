#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n'; 
void solve()
{ 
  int n;cin>>n;
  set<char>st;
  string s;cin>>s;
  for(auto &it:s)st.insert(it);
  int ans=INT_MAX;
  for(auto &xx:st){
    int cnt=0;
    int l=0,r=n-1;
    while (l<=r)
    {
       if(s[l]==s[r]){
         l++,r--;
       }else if(s[l]==xx){
        cnt++;l++;
       }else if(s[r]==xx){
        cnt++,r--;
       }else{
        cnt=n+1;
        break;
       }
    } 
    ans=min(cnt,ans); 
  }
  cout<<(ans==(n+1)?-1:ans)<<'\n';
  
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--)
        solve();
    
}
