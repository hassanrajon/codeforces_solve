#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
   int n;cin>>n;
   multiset<int,greater<int>>st;
   for(int i=0;i<n;i++){
    int x;cin>>x;st.insert(x);
   }
//    for(auto it:st)cout<<it<<" ";
   while(st.size()>1){
     int x=*st.begin();
     st.erase(st.begin());
     x+=*st.begin();
     st.erase(st.begin());
     st.insert(x-1);
   }
   cout<<*st.begin();nl
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
