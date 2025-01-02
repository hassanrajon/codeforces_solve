#include <bits/stdc++.h>
using namespace std;
int binary_search(int arr[], int size, int value)
{
    int lo = 0, hi = size - 1;
    while (lo <= hi)
    {
        int mid = (hi + lo) / 2;
        if (arr[mid] == value)
        {
            return mid + 1;
        }
        if (value > arr[mid])
        {
            lo = mid + 1;
        }
        if (value < arr[mid])
        {
            hi = mid - 1;
        }
    }
    return -1;
}
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
    cout << "index is " << binary_search(arr, n, 11);

    
}