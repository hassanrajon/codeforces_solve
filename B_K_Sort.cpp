#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ll long long int
#define l long int
#define razon_hassan              \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
const int MOD1 = 127657753, MOD2 = 987654319;
const int p1 = 137, p2 = 277;
const int mod = 1000000007;

//===========================================================
void feel_the_world()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    
   
    // vector<int> v;
    int current_max = vec[0];
    ll ans =0;
    int mx=0;
    for (int i = 1; i < n ; i++)
    {
        
       
        
        if (current_max > vec[i]) 
        {
            // v.push_back(current_max - vec[i]);
            ans+=current_max - vec[i];
            mx = max(current_max - vec[i],mx);
        }
        current_max = max(current_max, vec[i]);
        //  cout<<current_max<<" ";
    }
    ans+=mx;
    
    
  
    cout << ans << endl;
}

//===========================================================
int main()
{
    razon_hassan
        l t = 1;
    cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
