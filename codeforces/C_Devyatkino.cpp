#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
bool find_7(int x){
    while(x > 0){
        if(x % 10 == 7) return 1;
        x/=10;
    }
    return 0;
}
void solve()
{ 
    int n; cin >> n;
    int fix = 9, ans = 100;
    for(int i = 0; i <= 10; i++){
        int curr = n, cnt = 0;
        while(!find_7(curr)){
            curr += fix;
            cnt++;
        }
        ans = min(ans, cnt);
        fix = 10 * fix + 9;
    }
    cout << ans << endl;
}
int32_t main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    int tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
