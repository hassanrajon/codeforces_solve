#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
    int n,m,k;cin>>n>>m>>k;
    string s;
    char on='1';
    char zero='0';
    if(n>m){
       swap(n,m);
       swap(on,zero);
    }
    if(k>m || k<(m-n)){
        cout<<-1<<'\n';
        return;
    }
    while(n>0 || m>0){
         for(int i=0;i<k;i++){
            if(m>0){
                s.push_back(on);
                m--;
            }
         }
         for(int i=0;i<k;i++){
            if(n>0){
                s.push_back(zero);
                n--;
            }
         }
    }
    cout<<s;nl
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
