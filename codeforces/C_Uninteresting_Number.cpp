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
    string s;cin>>s;
    int two=min(count(all(s),'2'),9);
    int three=min(count(all(s),'3'),9);
    int sum=0;
    for(auto c:s){sum+=c-'0';}
    // debug(sum)
    for(int i=0;i<=two;i++){
        for(int j=0;j<=three;j++){
            if((sum+i*2+j*6)%9==0){yes return;}
        }
    }
    // debug(sum)
    no
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
