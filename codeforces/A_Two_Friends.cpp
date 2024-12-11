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
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        mp[i] = x;
    }
    //    for(auto &it:mp){
    //     cout<<it.first<<" "<<it.second<<endl;
    //    }
    for(int i=1;i<=n;i++){
      int key = mp[i];
      if(i==mp[key]){
        cout<<"2"<<endl;
        return;
      }
    }
    for(int i=1;i<=n;i++){
        if(mp[i]<=n and mp[i]>=1){
            cout<<"3"<<endl;
            return;
        }
    }
    cout<<"4"<<endl;
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
