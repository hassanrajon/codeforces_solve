#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
   int n,m;cin>>n>>m;
   vector<string>arr;
   for(int i=0;i<n;i++){
       string s;cin>>s;
       arr.push_back(s);
   }
   vector<int>row(n),col(m);
   for(int i=0;i<n;i++){
    int cnt=0;
    for(int j=0;j<m;j++){
     cnt+=(arr[i][j]=='1');
    }   
    row[i]=cnt;
   }
   for(int i=0;i<m;i++){
    int cnt=0;
    for(int j=0;j<n;j++){
     cnt+=(arr[j][i]=='1');
    }   
    col[i]=cnt;
   }
   int rw=0,cl=0;
   for(auto it:row)if(it&1)rw+=1;
   for(auto it:col)if(it&1)cl+=1;
   cout<<max(rw,cl);nl
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
