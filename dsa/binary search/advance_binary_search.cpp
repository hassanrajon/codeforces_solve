#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    /*

     • lower_bound() returns a pointer to the first array element whose
    value is at least x.
    • upper_bound() returns a pointer to the first array element whose
     value is
    larger than x.
    • equal_range() returns both above pointers.
    */

    // it will find out weather an element is present in an
    // array or not
    int x;
    cin >> x;
    auto k = lower_bound(arr, arr + n, x) - arr;
    if (k < n && arr[k] == x)
    {
        cout << "x is found at index " << k + 1 << "\n";
    }
    else
    {
        cout << "x is not found\n";
    }
    // to find the frequency of an array element
    auto a = lower_bound(arr, arr + n, x);
    auto b = upper_bound(arr, arr + n, x);
    cout << "frequency of x is " << b - a << '\n';
    // same code becomes shorter with this
    auto r = equal_range(arr, arr + n, x);
    cout << "frequency of x is " << r.second - r.first << '\n';
}