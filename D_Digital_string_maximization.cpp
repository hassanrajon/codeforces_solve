#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{   
    string s;cin>>s;
    for (int i = 0; i < s.size(); i++) {
        char mx=s[i];
        int indx=i;
        for (int j = i + 1; j < s.size() && (j - i) <= 9; j++) {
            int dist = j - i;
            // debug(dist)
            char new_value = s[j] - dist;
            if(new_value>mx){
                mx=new_value;
                indx=j;
            }
            // debug(mx)
        }
        // debug(mx)
        for(int j=indx;j>=i;j--){
            s[j]=s[j-1];
        }
        s[i]=mx;
        // debug(s)
    }
    cout<<s;nl
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
