#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
#define yes cout << "YES\n";
#define no cout << "NO\n";
void solve()
{ 
   int n;cin>>n;
   map<int,vector<int>>ans;
   map<int,int>cnt;
   for(int i=1;i<=n;i++){
    int x;cin>>x;
    ans[x].push_back(i);
    cnt[x]++;
   }
   if(cnt.size()==1){
    no
   }else{
    yes
    vector<pair<int,int>>arr;
    for(auto it:cnt){
        arr.push_back({it.second,it.first});
    }
    sort(arr.begin(),arr.end());
    auto first=arr[0];
    auto second=arr[1];
    int first_index=ans[first.second][0];
    int second_index=ans[second.second][0];
    for(int i=1;i<arr.size();i++){
       for(auto it:ans[arr[i].second]){
        cout<<first_index<<" "<<it<<'\n';
       }
    }
    int j=1;
    while(j<ans[first.second].size()){
        cout<<ans[second.second][j-1]<<" "<<ans[first.second][j]<<'\n';
        j++;
    }
   }
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
