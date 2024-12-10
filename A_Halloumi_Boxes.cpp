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
    int n,k;
    cin>>n>>k;
    int arr[n];
    bool found = false;
    cin>>arr[0];
    for(int i=1;i<(n);i++){
        cin>>arr[i];
        if(arr[i]<arr[i-1])
          found = true;
    }
   if(k<2 && found)
     no 
     else 
     yes
}

//===========================================================
int main()
{
    l t=1;
    cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
