#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
 int n;cin>>n;
 vector<ll>arr(n);
 for(int i=0;i<n;i++)
    cin>>arr[i];
 ll ans1=0,ans2=0;
 for(int i=0;i<n;i+=2)
    ans1=__gcd(ans1,arr[i]);      
 for(int i=1;i<n;i+=2)
    ans2=__gcd(ans2,arr[i]);      
 for(int i=0;i<n;i+=2)
   if(arr[i]%ans2==0){ans2=0;break;}  
 for(int i=1;i<n;i+=2)
    if(arr[i]%ans1==0){ans1=0;break;}
cout<<max(ans1,ans2)<<'\n'; 
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
