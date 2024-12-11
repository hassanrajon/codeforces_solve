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
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else if (n == 2)
    {
        cout << "-1" << endl;
    }
    else
    {   int cnt=0;
        for(int i=1;i<=n*n;i+=2){
            cout<<i<<" ";
            cnt++;
            if(cnt%n==0){
                nl
            }
        }
        for(int i=2;i<=n*n;i+=2){
            cout<<i<<" ";
            cnt++;
            if(cnt%n==0){
                nl
            }
        }
    }
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
