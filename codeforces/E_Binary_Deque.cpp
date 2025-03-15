#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
    int n,s;cin>>n>>s;
    vector<int>v(n);
    int ones=0;
    for(auto &it:v){
        cin>>it;
        if(it)ones++;
    }
    if(ones==s){
        cout<<0<<'\n';
        return;
    }else if(s>ones){
        cout<<(-1)<<'\n';
        return;
    }
    vector<int>left;
    vector<int>right;
    for(int i=0;i<n;i++)
        if(v[i])left.push_back(i);
    for(int i=n-1;i>=0;i--)
       if(v[i])right.push_back(n-i);  
    reverse(right.begin(),right.end());  
    // for(auto it:left)cout<<it<<" ";
    // cout<<endl;
    // for(auto it:right)cout<<it<<" ";
    // cout<<endl;
     int ans=1e9;
     for(int i=0;i+(s-1)<left.size();i++){
        int l = i==0?0:left[i-1]+1;
        int r = i+s-1==(ones-1)?0:right[i+s];
        // cout<<l<<" "<<r<<" "<<s<<" "<<endl;
        // cout<<left[i]<<" "<<left[i+(s-1)]<<endl;
        ans=min(ans,l+r);
     }
     cout<<ans<<'\n';
}
int main()
{   ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}
