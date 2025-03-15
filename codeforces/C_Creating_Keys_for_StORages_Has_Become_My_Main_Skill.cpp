#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
  int n,k;cin>>n>>k;
  int mn=0,temp=k;
  vector<int>bits;
  while(temp){
    bits.push_back(temp%2);
    temp=temp/2;
  }
  for(int i=0;i<bits.size();i++){
    if(bits[i]==0){
        mn=1<<i;
        break;
    }
  }
//   debug(mn);
  vector<int>ans;
  if(mn){
    int x=0;
    for(int i=0;i<mn && ans.size()<n;i++){
        ans.push_back(i);
        x=x|i;
    }
    while(ans.size()<n){
       ans.push_back(k);
       x=x|k;
    }
    if(x!=k){
        ans.pop_back();
        ans.push_back(k);
    }
  }else{
    vector<int>temp;
    ll tt=0;
    for(int i=0;i<=k && temp.size()<n;i++){
     temp.push_back(i);
     tt = tt|i;
    }
    while(temp.size()<n){
     temp.push_back(k);
    }
    if(tt!=k){
     temp.pop_back();
     temp.push_back(k);
    }
    for(auto it:temp)cout<<it<<" ";nl return;
  }
  for(auto it:ans)cout<<it<<" ";nl
 
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
