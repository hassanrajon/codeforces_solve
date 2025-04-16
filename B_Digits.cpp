#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
    int n, d;
    cin >> n >> d;
    vector<int> ans;
    ans.push_back(1);
    if((d % 3 == 0) || (n >= 3)) ans.push_back(3);
    if(d == 5) ans.push_back(5);
    if((d == 7) || (n >= 3)) ans.push_back(7);
    if(d % 9 == 0) ans.push_back(9);
    else if(d % 3 == 0) {
      if(n >= 3) ans.push_back(9);
    }else if(n >= 6){
       ans.push_back(9);
    }
    for(auto it:ans)cout<<it<<' ';nl
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
