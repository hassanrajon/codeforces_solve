#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "yes\n";
#define no cout << "no\n";
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
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    int left = 0, right = 0;
    for (int i = 0; i < (n - 1); i++)
    {
        if (vec[i] > vec[i + 1])
        {
            left = i;
            break;
        }
    }
    for (int i = left; i < n; i++)
    {
        right = i;
        if (vec[i] < vec[i + 1])
            break;
    }
    if (is_sorted(vec.begin(),vec.end()))
    {
        yes
                cout
            << "1 1";
        return;
    }
    reverse(vec.begin() + left, vec.begin() + right + 1);
    //    for(auto it:vec){
    //     cout<<it<<" ";
    //    }
    if (is_sorted(vec.begin(), vec.end()))
    {
        yes 
        cout<<++left<<" "<<++right;
    }else{
        no
    }
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
