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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        if(arr[i-1]<arr[i]){
            continue;
        }else{
             ll temp =0;
             for(int j=2;;j++){
                temp = (arr[i]*j);
                if(temp>arr[i-1]){
                    arr[i]=temp;
                    break;
                }
             }
        }
    }

   
cout<<arr[n-1];
nl
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
