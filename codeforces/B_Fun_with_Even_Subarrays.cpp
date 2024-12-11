#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int steps = 0, base = 1;
    reverse(arr, arr + n);
   while(base<n){
    if(arr[base]==arr[0]){base++;continue;}
    steps++;
    base*=2;
   }
    cout << steps << '\n';
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tt = 1;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}
