#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
#define all(r) r.begin(), r.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";
vector<char> getGroupTypes(const string& str) {
    vector<char> groupTypes;
    for (int i = 0; i < str.size(); ) {
        char ch = str[i];
        while (i < str.size() && str[i] == ch) i++;
        groupTypes.push_back(ch);
    }
    return groupTypes;
}

auto getGroupLengths = [](const string& str) {
    vector<int> lengths;
    int count = 1;
    for (int i = 1; i < str.size(); ++i) {
        if (str[i] == str[i - 1]) {
            count++;
        } else {
            lengths.push_back(count);
            count = 1;
        }
    }
    lengths.push_back(count);
    return lengths;
};

void solve()
{ 
   string p;cin>>p;
   string s;cin>>s;
   vector<int> p_len = getGroupLengths(p);
   vector<int> s_len = getGroupLengths(s);
   vector<char> p_groups = getGroupTypes(p);
   vector<char> s_groups = getGroupTypes(s);
//    for(auto it:p_len)cout<<it<<' ';nl
//    for(auto it:s_len)cout<<it<<' ';nl
//    for(auto it:p_groups)cout<<it<<' ';nl
//    for(auto it:s_groups)cout<<it<<' ';nl
   if(p_groups.size()!=s_groups.size()){
    // cout<<"hello";
    no return;
   }else {
    for(int i=0;i<p_groups.size();i++){
        if(s_len[i]>=p_len[i] && s_len[i]<=(2*p_len[i]) && p_groups[i]==s_groups[i]){
            continue;
        }else{
            no return;
        }
    }
    yes
   }
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
