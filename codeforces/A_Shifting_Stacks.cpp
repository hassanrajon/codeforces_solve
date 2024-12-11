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
        vector<ll> h(n);
        for(int i = 0; i < n; i++) cin >> h[i];
 
        bool ok = true;
        for(int i = 0; i < n; i++){
            if(h[i] < i) ok = false;
            if(h[i] > i && i < n - 1){
                h[i + 1] += h[i] - i;
                h[i] = i;
            }
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
}

//===========================================================
int main()
{
    l t=1;
    cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
