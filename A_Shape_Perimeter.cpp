#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n'; 
void solve()
{ 
   int n,m;cin>>n>>m;
   int topx=0,topy=0;
   int diff=0;
   int bottomx=0,bottomy=0;
   for(int i=0;i<n;i++){
    int x=0,y=0;
    if(i==0){
      cin>>bottomx>>bottomy;
      topx=(bottomx+m);
      topy=(bottomy+m);
    //   cout<<bottomx<<" "<<bottomy<<'\n';
    //   cout<<topx<<" "<<topy<<'\n';
    }else{
        int x,y;
        cin>>x>>y;
        bottomx=x+bottomx;
        bottomy=y+bottomy;
        diff+=2*(topx-bottomx);
        diff+=2*(topy-bottomy);
        // cout<<diff<<'\n';
        topx=bottomx+m;
        topy=bottomy+m;
    //   cout<<bottomx<<" "<<bottomy<<'\n';
    //   cout<<topx<<" "<<topy<<'\n';
        
    }
   }
   int ans = (n*4*m)-(diff);
   cout<<ans<<'\n';
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--)
        solve();
    
}
