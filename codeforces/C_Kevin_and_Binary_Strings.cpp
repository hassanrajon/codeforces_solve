#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define ff first
#define ss second
#define pb push_back
string find_xor(string a,string b){
    for(int i=0;i<a.size();i++){
        if(a[i]==b[i]){
            a[i]='0';
        }else{
            a[i]='1';
        }
    }
    return a;
}
void solve()
{   
    string s;cin>>s;
    map<string,pair<int,int>>mp;
    if(count(all(s),'1')==s.size()){
        cout<<1<<" "<<s.size()<<" 1 1";nl
        return;
    } 
    string last=""; 
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            int size=s.size()-i;
            last+=s.substr(i,s.size()-i);
            // debug(last)
            for(int j=0;j+size<s.size();j++){
            //   debug(s.substr(j,size-1));
            // cout<<s.substr(j,size);nl
              mp[find_xor(s.substr(j,size),last)]={j+1,j+size};
            }
            break;
        }
    }
    int l=0,r=0;
    for(auto it:mp){
        if(it.ff>last){
            last=it.ff;
            l=it.ss.ff;
            r=it.ss.ss;
        }
    }
    cout<<1<<" "<<s.size()<<' '<<l<<' '<<r;nl
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
