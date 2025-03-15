#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
#define yes cout << "Yes\n";
#define no cout << "No\n";
void solve()
{ 
  int n;cin>>n;
  vector<int>cnt(n+1);
  for(int i=0;i<n;i++){
    int x;cin>>x;
    cnt[x]++;
  } 
  for(int i=1;i<=n;i++){
    if(cnt[i]==1){
        no return;
    }
    cnt[i+1]+=max(0,cnt[i]-2);
  }
  yes
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
