#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long int
typedef tree<int, null_type, greater_equal<int>, rb_tree_tag, tree_order_statistics_node_update> os;
void solve()
{
  int n, x;
  cin >> n >> x;
  os myset;
  for (int i = 0; i < n; i++)
  {
    int k;
    cin >> k;
    myset.insert(k);
  }
  int ans = 0;
  while (myset.size() > 0)
  {
    int temp = x;
    vector<int> v;
    while (temp-- && myset.size() > 0)
    {
      int last = *myset.find_by_order(0);
      auto front = myset.find_by_order(0);
      myset.erase(front);
      if (last - 1 != 0)
        v.push_back(last - 1);
    }
    for (int i = 0; i < v.size(); i++)
    myset.insert(v[i]);
    v.clear();
    ans++; // 1 ta kori group korsi
    // cout << "ans: " << ans << "\n";
    // for(auto it:myset)cout<<it<<" ";cout<<endl;
  }
  cout<<ans<<"\n";
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
