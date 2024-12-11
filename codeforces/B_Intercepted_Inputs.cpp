#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
   int n;cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mp[x]++;
    }
    n-=2;
    for(auto it:mp){
        if(n%it.first==0){
            int need = n/it.first;
            if(mp.count(need)>=1){
                cout<<it.first<<" "<<need<<'\n';
                return;
            }
        }
    }

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
