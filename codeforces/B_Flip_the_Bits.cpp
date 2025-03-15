#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
    int n;cin>>n;
    string a;cin>>a;
    string b;cin>>b;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int cnt_zero=count(a.begin(),a.end(),'0');
    int cnt_one=n-cnt_zero;
    bool flip=false;
    for(int i=0;i<n;i++){
        if(flip and a[i]==b[i]){
            if(cnt_one==cnt_zero){
                flip=false;
            }else{
                cout<<"NO\n";
                return;
            }
        }
        if(!flip and a[i]!=b[i]){
            if(cnt_one==cnt_zero){
                flip=true;
            }else{
                cout<<"NO\n";
                return;
            }
        }
        if(a[i]=='0')
        cnt_zero--;
        else 
        cnt_one--;
    }
    cout<<"YES\n";
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
