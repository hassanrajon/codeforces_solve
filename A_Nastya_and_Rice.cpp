#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "Yes\n";
#define no cout << "No\n";
#define pb push_back
#define pp pop_back
#define ll long long int
#define l long int
//===========================================================
void feel_the_world()
{
    int n, a, b, c, d;
		cin >> n >> a >> b >> c >> d;
		int L = n * (a - b), R = n * (a + b);
		if (R < c - d || c + d < L)
		    cout << "No\n";
		else
		    cout << "Yes\n";
}

//===========================================================
int main()
{
    l t = 1;
    cin >> t;
    while (t--)
    {
        feel_the_world();
        
    }
}
