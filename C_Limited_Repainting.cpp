#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
    int n,k;cin>>n>>k;
    string s;cin>>s;
    vector<int>arr(n);
    map<int,int>mp;
    for(auto &it:arr)cin>>it;
    set<int,greater<int>()>st;
    vector<int>cnt;
    int b=0;
    for(int i=0;i<n;i++){
        if(s[i]=='R'){
             cnt.push_back(arr[i]);
             st.insert(arr[i]);
        }else{
            b++;
        }
    }
    if(b<=k){
        cout<<0;nl
        return;
    }else{
        while(k>0){
            int mx= *st.begin();
            
        }
    }
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
