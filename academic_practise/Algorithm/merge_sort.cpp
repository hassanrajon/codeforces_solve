#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int start, int mid, int end)
{
  int temp[end - start + 1];
  int first = start, second = mid + 1, x = 0;
  // Merge the two subarrays
  while (first <= mid && second <= end)
  {
    if (arr[first] <= arr[second])
      temp[x++] = arr[first++];
    else
      temp[x++] = arr[second++];
  }
  // Copy remaining elements from first subarray
  while (first <= mid)
    temp[x++] = arr[first++];
  // Copy remaining elements from second subarray
  while (second <= end)
    temp[x++] = arr[second++];
  // Copy the merged elements back into the original array
  for (int i = 0, j = start; i < x; i++, j++)
    arr[j] = temp[i];
}
void merge_sort(int arr[], int start, int end)
{
  if (start == end)
    return;
  int mid = start + (end - start) / 2;
  // Recursively split and sort both halves
  merge_sort(arr, start, mid);
  merge_sort(arr, mid + 1, end);
  // Merge the sorted halves
  merge(arr, start, mid, end);
}
int main()
{
  int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  merge_sort(arr, 0, 9);
  for (int i = 0; i < 10; i++)
    cout << arr[i] << " ";
  cout << endl;
  return 0;
}
