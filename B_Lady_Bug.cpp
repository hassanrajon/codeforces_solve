#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
#define all(r) r.begin(), r.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";
void solve()
{ 
    int n;cin>>n;
    string a;cin>>a;
    string b;cin>>b;
    int cnt_f=n/2,cnt_s=(n+1)/2;
    int have_f=0,have_s=0;
    for(int i=0;i<n;i++){
        if(i&1)have_f+=(a[i]=='0');
        else have_f+=(b[i]=='0');
    }
    for(int i=0;i<n;i++){
        if(i&1)have_s+=(b[i]=='0');
        else have_s+=(a[i]=='0');
    }
    if(cnt_f<=have_f && cnt_s<=have_s) 
     yes
     else no
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
