#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n'; 
vector<string>v;
void pre(){
    for(char i='a';i<='z';i++){
        string s;s+=i;
        v.push_back(s);
    }
    for(char i='a';i<='z';i++){
        for(char j='a';j<='z';j++){
            string s;s+=i;s+=j;
            v.push_back(s);
        }
    }
    for(char i='a';i<='z';i++){
        for(char j='a';j<='z';j++){
            for(char k='a';k<='z';k++){
                string s;s+=i;s+=j;s+=k;
                v.push_back(s);
            }
        }
    }
}
void solve()
{ 
    int n;cin>>n;
    string s;cin>>s;
    for(auto ss:v){
       if(s.find(ss)==s.npos){
        cout<<ss<<'\n';
        return;
       }
    }

}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    pre();
    cin >> tt;
    while (tt--)
        solve();
    
}
