#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{
  string s;cin>>s;
  vector<int> arr(26);
  for(char c:s)arr[c-'A']++;
  int cnt =0;
  for(auto it:arr)if(it&1)cnt++;
  
  if((cnt && !s.size()&1) || cnt>1)
   cout<<"NO SOLUTION";
   else{
     for(int i=0;i<26;i++){
        if(!(arr[i]&1) && arr[i]>0){
           for(int j=0;j<(arr[i]/2);j++){
            cout<<char('A'+i);
           }
        }
     }
     for(int i=0;i<26;i++){
        if(arr[i]&1){
           for(int j=0;j<(arr[i]);j++){
            cout<<char('A'+i);
           }
        }
     }
     for(int i=25;i>=0;i--){
        if(!(arr[i]&1) && arr[i]>0){
           for(int j=0;j<(arr[i]/2);j++){
            cout<<char('A'+i);
           }
        }
     }
   }
}
int main()
{   ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tt=1;
    // cin >> tt;
    while (tt--)
    {
        solve();
    }
}
