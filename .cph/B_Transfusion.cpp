#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
#define all(r) r.begin(), r.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";
void solve()
{ 
    int n;cin>>n;
    vector<int>arr(n);
    for(auto &it:arr)cin>>it;
    ll prothom=0,prothom_cnt=0,second=0,second_cnt=0;
    for(int i=0;i<n;i+=2){
      prothom+=arr[i];prothom_cnt++;
    }
    for(int i=1;i<n;i+=2){
        second+=arr[i];second_cnt++;
    }
    if(prothom%prothom_cnt==0 && second%second_cnt==0 && (prothom/prothom_cnt)==(second/second_cnt)){
        yes
    }else{
        no
    }
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
