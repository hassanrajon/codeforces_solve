#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
  int n;
  cin>>n;
  vector<pair<int,int>>first(n),second(n),third(n);
  for(int i=0;i<n;i++){
    cin>>first[i].first;
    first[i].second=i;
  }
  for(int i=0;i<n;i++){
   cin>>second[i].first;
    second[i].second=i;
  }
  for(int i=0;i<n;i++){
    cin>>third[i].first;
    third[i].second=i;
  }
  sort(first.begin(),first.end());
  sort(second.begin(),second.end());
  sort(third.begin(),third.end());
 int ans=0;
 for(int i=n-3;i<n;i++){
    for(int j=n-3;j<n;j++){
        for(int k=n-3;k<n;k++){
            if(first[i].second == second[j].second || first[i].second == third[k].second || second[j].second == third[k].second)continue;
            ans=max(ans,first[i].first+second[j].first+third[k].first);
        }
    }
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
