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
bool flag[105];
//===========================================================
void feel_the_world()
{
    int n,m;
    cin>>n;
    int male[n];
    for(int i=0;i<n;i++){
        cin>>male[i];
    }
    cin>>m;
    int female[m];
    for(int i=0;i<m;i++){
        cin>>female[i];
    }
    int cnt =0;
    sort(male,male+n);
    sort(female,female+m);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(flag[j] == 0 && (abs(male[i]-female[j]) <= 1))
            {
                flag[j] = 1;
                cnt++;
                break;
            }
        }
    }
    cout<<cnt;
}

//===========================================================
int main()
{
    razon_hassan
        l t = 1;
    // cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
