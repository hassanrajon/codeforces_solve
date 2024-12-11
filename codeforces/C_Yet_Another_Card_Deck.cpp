#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
  int n,q;cin>>n>>q;
  vector<int>vec(n),qu(q),hash(51,0);
  for(int i=0;i<n;i++){
    cin>>vec[i];
    if(!hash[vec[i]])
     hash[vec[i]]=i+1;
  }
  while(q--){
    int x;cin>>x;
    cout<<hash[x]<<" ";
    for(int i=1;i<51;i++){
     if(hash[x] && hash[i]< hash[x])
       hash[i]+=1;
    }
     hash[x]=1;
  }

}
int main()
{   ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tt=1;
    // cin >> tt;
    while (tt--)
    {
        solve();
    }
}
