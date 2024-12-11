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
    int n, m;
    cin >> n >> m;
    int min_req = 0, cnt = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        min_req += arr[i];
    }
    
    min_req += (10 * (n - 1));
    if (m < min_req)
        cout << "-1";
    else
    {
        m-=min_req;
        int cnt = ((n-1)*10)/5+(m/5);
        cout<<cnt;
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
