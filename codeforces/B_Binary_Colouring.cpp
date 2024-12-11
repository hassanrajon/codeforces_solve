#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ll long long int
#define l long int
#define razon_hassan                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
const int MOD1 = 127657753, MOD2 = 987654319;
const int p1 = 137, p2 = 277;
const int mod = 1000000007;


//===========================================================
void feel_the_world()
{
  long long x;
    cin >> x;
    
    vector<int> a;
    
    while (x != 0) {
        if (x % 2 == 1) {
            a.push_back(1);
            x--;
        } else if (x % 2 == -1) {
            a.push_back(-1);
            x++;
        } else {
            a.push_back(0);
        }
        x /= 2;
    }
    
    while (a.size() < 32) {
        a.push_back(0);
    }
    
    int n = a.size();
    
    for (int i = 0; i < n; i++) {
        if (a[i] != 0 && i + 1 < n && a[i + 1] != 0) {
            if (a[i] == 1 && a[i + 1] == 1) {
                a[i] = -1;
                a[i + 1] = 0;
                if (i + 2 < n) {
                    a[i + 2]++;
                } else {
                    a.push_back(1);
                }
            } else if (a[i] == -1 && a[i + 1] == -1) {
                a[i] = 1;
                a[i + 1] = 0;
                if (i + 2 < n) {
                    a[i + 2]--;
                } else {
                    a.push_back(-1);
                }
            }
        }
    }
    
    while (a.size() > 1 && a.back() == 0) {
        a.pop_back();
    }
    
    cout << a.size() << "\n";
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
 
}

//===========================================================
int main()
{   
    razon_hassan
    l t=1;
    cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
