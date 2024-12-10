#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define pb push_back
#define pp pop_back
#define ll long long int
#define l long int
const int mod = 1000000007;
//===========================================================
void feel_the_world()
{
    int n;
    cin>>n;
   int arr1[n];
   int arr2[n];
   map<int,int>mp;
   for(int i=0;i<n;i++){
    cin>>arr1[i];
   }
   for(int i=0;i<n;i++){
    cin>>arr2[i];
   }
   for(int i=0;i<n;i++){
     mp[arr1[i]]=arr2[i];
   }
   for(auto it:mp){
    cout<<it.first<<" ";
   }
nl 
for(auto it:mp){
    cout<<it.second<<" ";
}
nl

}

//===========================================================
int main()
{
    ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    l t=1;
    cin >> t;
    while (t--)
    {   
        feel_the_world();
    }
}
