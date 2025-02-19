#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
    string s;cin>>s;
    //AAAABBBBCCC
    int cnt=0;
    for(int i=0;i<s.size();i++){
        for(int k=i+2;k<s.size();k++){
            if((k+i)%2==0){
                int j=(k+i)/2;
                if(s[i]=='A' and s[j]=='B' and s[k]=='C'){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<'\n';

}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    // cin >> tt;
    while (tt--){
        solve();
     }
}
