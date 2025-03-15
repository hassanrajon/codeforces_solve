#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool cmp(const pair<char, pair<int, int>>& a, const pair<char, pair<int, int>>& b) {
    return a.second.second < b.second.second;
}
int main(){
    int n;cin>>n;
    vector<pair<char,pair<int,int>>>v;
    for(int i=0;i<n;i++){
       char x;int a,b;cin>>x>>a>>b;
       v.push_back({x,{a,b}});
    }
    sort(v.begin(),v.end(),cmp);
    auto first = *(v.begin());
    cout<<first.first<<"-->";
    int x = first.second.second;
    for(int i=1;i<n;i++){
        if(v[i].second.first>=x){
            x=v[i].second.second;
            cout<<v[i].first<<"--->";
        }
    }
    cout<<endl;
    for(auto it:v)cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;
    
}