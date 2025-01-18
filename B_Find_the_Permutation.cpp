#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl cout<<'\n';
#define debug(a) cerr << #a <<" = "<< (a) << '\n'; 
void solve()
{ 
 int n;cin>>n;
 vector<string>adj(n);
 for(auto &it:adj)cin>>it;
 vector<int>ans(n);
 vector<int>left(n,0);
 vector<int>right(n,n-1);
 for(int i=0;i<n;i++){
    int cnt=0;
    for(int j=0;j<n;j++){
       if(left[i]==left[j] and right[i]==right[j] and adj[i][j]=='1'){
        cnt++;
       }
    }
   int pos=right[i]-cnt;
    // debug(cnt);
    // debug(pos);
    ans[pos]=i+1;
    for(int j=0;j<n;j++){
        if(left[i]==left[j] and right[i]==right[j] and i!=j){
            if(adj[i][j]=='1'){
               left[j]=pos+1;
            }else{
                right[j]=pos-1;
            }
        }
    }
    left[i]=right[i]=pos;
 }
//    for(auto it:left)cout<<it<<" ";nl
//    for(auto it:right)cout<<it<<" ";nl
  for(auto it:ans)cout<<it<<" ";
  nl
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--)
        solve();
    
}
