#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
   int x,n,m;cin>>x>>n>>m;
   int temp=x;
   int mn=0,mx=0;
   int cnt1=0,cnt2=0;
      for(int i=0;i<30;i++){
        temp=temp/2;
        cnt1++;
        if(temp==0){
            break;
        }
      }
      temp=x;
      for(int i=0;i<30;i++){
        temp=(int)ceil(temp/2.0);
        cnt2++;
        if(temp==1){
            break;
        }
      }
      if(n>=cnt1){
        cout<<mn<<" "<<mx;nl
        return;
      }else if(m>=cnt2){
        if(n>0){
            cout<<0<<" "<<1;nl
        }else{
            cout<<1<<" "<<1;nl
        }
        return;
      }else{
        temp=x;
        for(int i=0;i<m;i++){
            temp=temp=(int)ceil(temp/2.0);
        }
        for(int i=0;i<n;i++){
            temp=temp/2;
        }
        mn=temp;
        temp=x;
        for(int i=0;i<n;i++){
            temp=temp/2;
        }
        for(int i=0;i<m;i++){
            temp=temp=(int)ceil(temp/2.0);
        }
        mx=temp;
        cout<<mn<<" "<<mx;nl
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
