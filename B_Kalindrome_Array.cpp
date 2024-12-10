#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool kalindrom(int arr[],int n,int x){
 vector<int>check;
 for(int i=0;i<n;i++){
    if(arr[i]!=x)check.push_back(arr[i]);
 }
 int cntx=check.size();
 for(int i=0;i<cntx/2;i++){
    if(check[i]!=check[cntx-i-1])return false;
 }
 return true;
}  
void solve()
{
  ll n;cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)cin>>arr[i];
  bool ok = true;
  for(int i=0;i<(n/2);i++){
   if(arr[i]!=arr[n-1-i]){
     if(!kalindrom(arr,n,arr[i]) && !kalindrom(arr,n,arr[n-1-i]))
     ok=false;
     break;
   }
  }
  cout<<(ok?"YES\n":"NO\n");
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
