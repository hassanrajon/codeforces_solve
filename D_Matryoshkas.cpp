#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
  int n;cin>>n;
  vector<int>v(n);
  map<int,int>cnt;
  set<int>st;
  for(auto &it:v){
    cin>>it;
    cnt[it]++;
    st.insert(it);
    st.insert(it+1);
  }
  int ans=0,last=0;
  for(auto x:st){
    int curr=cnt[x];
    ans+=max(0,curr-last);
    last=curr;
  }
  cout<<ans<<"\n";
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
