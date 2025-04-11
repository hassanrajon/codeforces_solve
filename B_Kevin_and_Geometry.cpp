#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define int long long
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
#define all(r) r.begin(), r.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";
/*
upper_bound --> first element greater than the element
lower_bound --> first element greater than or equal to the element
 -- read statement carafully
 -- check for every case (k=1,k=2,others)
 -- checkout constraints again
 -- formalize what you need to do
*/
void solve()
{ 
    int n;cin>>n;
    vector<int>arr(n);
    for(auto &it:arr)cin>>it;
    sort(all(arr));
    int double_paisi=-1,l=0;
    for(int i=0;i+1<n;i++){
        if(arr[i]==arr[i+1]){
            double_paisi=i;
        }
    }
    if(double_paisi==-1){
        cout<<(-1);nl return;
    }
    l=arr[double_paisi];
    arr.erase(arr.begin()+double_paisi);
    arr.erase(arr.begin()+double_paisi);
    // for(auto it:arr)cout<<it<<' ';nl
    for(int i=0;i+1<n-2;i++){
       if((arr[i]+2*l)>arr[i+1]){
        cout<<l<<' '<<l<<' '<<arr[i]<<' '<<arr[i+1];nl return;
       }
    }
    cout<<(-1);nl
}
int32_t main()
{   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
