#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define pb push_back
#define pp pop_back
#define ll long long int
#define l long int
const int MOD1 = 127657753, MOD2 = 987654319;
const int p1 = 137, p2 = 277;
const int mod = 1000000007;
#define razon_hassan              \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

//===========================================================

//===========================================================
int main()
{
    razon_hassan
        l t = 1;
    cin >> t;

    while (t--)
    {

        queue<char> myq;
        for (int i = 0; i < 26; i++)
        {
            myq.push(i + 'a');
        }
        int n;
        cin >> n;
        int arr[n];
        string s;
        int fr[26] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
            {
                s.push_back(myq.front());
                fr[myq.front() - 'a']++;
                myq.pop();
            }
            else
            {
                for (int j = 0; j < 26; j++)
                {
                    if (arr[i] == fr[j])
                    {
                        s.push_back(j + 'a');
                        fr[j]++;
                        break;
                    }
                }
            }
        }
        cout << s;
        nl;
    }
}
