#include <bits/stdc++.h>
using namespace std;
int binary_search(vector<int> &vec, int low, int high, int target)
{
  if (low > high)
  {
    return -1;
  }
  int mid = (low + high) / 2;
  if (target == vec[mid])
    return mid;
  else if (target > vec[mid])
    return binary_search(vec, mid + 1, high, target);
  else
    return binary_search(vec, 0, mid - 1, target);
}
int main()
{
  int n, target;
  cin >> n >> target;
  vector<int> vec(n);
  for (auto &it : vec)
    cin >> it;
  sort(vec.begin(), vec.end());
  for (auto &it : vec)
    cout << it << " ";
  cout << endl;
  cout << binary_search(vec, 0, n - 1, target);
}