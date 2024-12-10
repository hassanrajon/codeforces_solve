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
    long long n;
    cin >> n;
    cout << (n - 1) * n * (n + 1) / 6 + n << endl;
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
