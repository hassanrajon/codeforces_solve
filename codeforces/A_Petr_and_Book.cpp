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
    cin >> n;
    int arr[7];
    for (int i = 0; i < 7; i++)
        cin >> arr[i];

    int i = 0;
    while (n > 0)
    {
        n -= arr[i];
        i++;
        i == 7 ? i = 0 : i = i;
    }
    i == 0 ? cout << "7" : cout << i;
    ;
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
