#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define pb push_back
#define pp pop_back
#define ll long long int
#define l long int
//===========================================================
void feel_the_world()
{
    string s;
    int k;
    cin >> k;
    cin >> s;
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i] - 'a']++;
    }
  
 
    string ans;
    bool found = false;
    for(int i=0;i<26;i++){
       if(arr[i]%k!=0){
        cout<<"-1";
        return;
       }else{
        int x = arr[i]/k;
        while(x--){
            ans.push_back(i+'a');
        }
       }
    }
  while(k--){
    cout<<ans;
  }
}

//===========================================================
int main()
{
    l t = 1;
    // cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
