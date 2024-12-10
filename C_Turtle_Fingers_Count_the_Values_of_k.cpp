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
    ll a, b, m;
    cin >> a >> b >> m;
    int ax = 1, by = 1, aa = a, bb = b;
    while (aa <= m)
    {
        if (m % aa == 0)
        {
            ax++;
        }
        else
        {
            break;
        }
        aa *= a;
    }
    while (bb <= m)
    {
        if (m % bb == 0)
        {
            by++;
        }
        else
        {
            break;
        }
        bb *= b;
    }
    unordered_set<int> st;
    for (int i = 0; i < ax; i++)
    {
        for (int j = 0; j < by; j++)
        {
           ll val=1;
           for(int p=0;p<i;p++)
            val*=a;
            for(int p=0;p<j;p++)
            val*=b;
            if(m%val==0)
            st.insert(m/val);
        }
    }

    cout << st.size() << endl;
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
