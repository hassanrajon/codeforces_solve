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
    vector<int> vec;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   int pos=0;
    for (int i = 0, j = 1; i < (n - 1); i++, j++)
    {
        if (arr[i] > arr[j] && arr[i] > 9)
        {
                pos = j;
        }
    }

    for(int i=0;i<pos;i++){
        if(arr[i]>9){
            int x = arr[i];
            int first = x%10;
            x/=10;
            vec.push_back(x);
            vec.push_back(first);
        }else{
            vec.push_back(arr[i]);
        }
    }
    for(int i=pos;i<n;i++){
        vec.push_back(arr[i]);
    }
    // vec.push_back(arr[n - 1]);
    // for (auto it : vec)
    // {
    //     cout << it << " ";
    // }
    // nl
    for(int i=0;i<vec.size()-1;i++){
     if(vec[i]>vec[i+1]){
        no
        return;
     }
    }
    yes
    return;
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
