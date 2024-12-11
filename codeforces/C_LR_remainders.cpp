#include<bits/stdc++.h>
using namespace std;

#define nl cout << "\n";
#define ll unsigned long long int
#define l long int
#define razon_hassan              \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

const int mod = 1000000007;

//===========================================================
void feel_the_world()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    vector<int> order;
    vector<int> rem;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> s;
    int left = 0, right = n - 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'L')
        {
            order.push_back(arr[left++]);
        }
        else
        {
            order.push_back(arr[right--]);
        }
    }
   reverse(order.begin(),order.end());

   ll ans = 1;
   for(int i=0;i<n;i++){
    ans =( (order[i]%m)*ans ) %m;
    rem.push_back(ans);
   }
   reverse(rem.begin(),rem.end());
   for(int it:rem){
    cout<<it<<" ";
   }
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
    return 0;
}
