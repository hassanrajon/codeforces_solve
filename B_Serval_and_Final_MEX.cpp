#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
   int n,cnt=0;cin>>n;
   vector<int>arr(n);
   for(auto &it:arr){cin>>it;cnt+=(it==0);}
   if(!cnt){cout<<1;nl cout<<1<<' '<<n;nl return;}
   if(cnt==1){
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            if(i>=2){
                cout<<3;nl
                cout<<(i-1)<<' '<<i;nl
                cout<<(i-1)<<' '<<i;nl
                cout<<(1)<<' '<<n-2;nl
            }else{
                cout<<3;nl
                cout<<(i+2)<<' '<<(i+3);nl
                cout<<(i+1)<<' '<<(i+2);nl
                cout<<(1)<<' '<<(n-2);nl
            }
        }
    }
   }else if(arr[n-1]==0 && arr[n-2]==0 && cnt==2){
     cout<<2;nl
     cout<<n-1<<' '<<n;nl
     cout<<1<<' '<<n-1;nl
   }else if(arr[0]==0 && arr[1]==0 && cnt==2){
    cout<<2;nl
    cout<<1<<' '<<2;nl
    cout<<1<<' '<<n-1;nl
  }else{
    int temp=0;bool ok=false;
     for(int i=0;i<n;i++){
        temp++;
       if(arr[i]==0){
        ok=true;
       } 
       if(ok && temp>=2){
        cout<<3;nl
        cout<<(i+2)<<' '<<(n);nl
        cout<<1<<' '<<(i+1);nl
        cout<<1<<' '<<2;nl
        return;
       }
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
