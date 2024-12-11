#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b)
{
    if (a % 2 == 0 && b % 2 == 0)
    {
        return a < b;
    }
    else if (a % 2 != 0 && b % 2 != 0)
    {
        return a < b;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int v[n];
        int i, x = 0, y = 0, j, min, c = 0;
        for (i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v,v+n,cmp);
        for (i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}