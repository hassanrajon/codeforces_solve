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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll moves =0;
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1])
            continue;
        else {
            moves+=arr[i-1]-arr[i];
            // cout<<moves<<" ";
            arr[i]+=arr[i-1]-arr[i];
            
        }
    }
    cout<<moves;
}

//===========================================================
int main()
{
    l t=1;
    // cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
