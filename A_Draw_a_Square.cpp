#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
#define all(r) r.begin(), r.end()
#define yes cout << "Yes\n";
#define no cout << "No\n";
void solve()
{ 
    vector<int>arr(4);
    for(auto &it:arr)cin>>it;
    sort(all(arr));
    if(arr[0]==arr[3])yes
    else no
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
