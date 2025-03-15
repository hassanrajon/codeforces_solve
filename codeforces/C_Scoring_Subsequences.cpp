#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            cout<<i<<" "<<m<<" "<<a[i-m]<<"\n";
            m += a[i - m] > m;
            // cout << m << " ";
        }
        cout << endl;
    }
}